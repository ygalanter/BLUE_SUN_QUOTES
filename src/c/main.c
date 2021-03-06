#include <pebble.h>
#include "face.h"
#include "quote.h"  
  
char buffer_time[] = "00 00";
char buffer_date[] = "00 00";
char battery_buffer[]="100%";

bool bQuoteDisplayed = false;


// when watch is shaken or tapped
static void accel_tap_handler(AccelAxisType axis, int32_t direction)
{
   
    if (axis != ACCEL_AXIS_Y) return; // only show quote for up-down movement
 
    if (bQuoteDisplayed) {
      hide_quote();
      bQuoteDisplayed = false;
    } else {
      show_quote();
      bQuoteDisplayed = true;
    }
    
}



// timer tick
void tick_handler(struct tm *tick_time, TimeUnits units_changed)
{
  
    if (!clock_is_24h_style()) {
        if( tick_time->tm_hour > 11 ) {   // YG Jun-25-2014: 0..11 - am 12..23 - pm
            if( tick_time->tm_hour > 12 ) tick_time->tm_hour -= 12;
        } else {
            if( tick_time->tm_hour == 0 ) tick_time->tm_hour = 12;
        }        
     }
 
    
    // displaying time
    strftime(buffer_time, sizeof("00 00"), "%H %M", tick_time);
    strftime(buffer_date, sizeof("00 00"), "%m %d", tick_time);
  
    //battery
    BatteryChargeState state =  battery_state_service_peek();
    if (state.charge_percent <=20 || state.is_plugged) { // displaying only if percentage falls below 20 or battery is plugged in
       snprintf(battery_buffer, sizeof(battery_buffer), "%d%%", state.charge_percent);
    } else {
       strcpy(battery_buffer, "    " );
    }
   
    set_texts(buffer_time, buffer_date, battery_buffer);
    
}    
  
  
  
int main() {
  show_face();
  
  tick_timer_service_subscribe(MINUTE_UNIT, (TickHandler) tick_handler);
  accel_tap_service_subscribe(&accel_tap_handler);
  
  app_event_loop();
  
  tick_timer_service_unsubscribe(); 
  accel_tap_service_unsubscribe();
  
  return 0;
}