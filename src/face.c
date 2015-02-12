#include "face.h"
#include <pebble.h>

// BEGIN AUTO-GENERATED UI CODE; DO NOT MODIFY
static Window *s_window;
static GBitmap *s_res_image_background;
static GFont s_res_font_rubik_mono_35;
static BitmapLayer *s_bitmaplayer_background;
static TextLayer *s_textlayer_date;
static TextLayer *s_textlayer_time;

static void initialise_ui(void) {
  s_window = window_create();
  window_set_background_color(s_window, GColorBlack);
  window_set_fullscreen(s_window, true);
  
  s_res_image_background = gbitmap_create_with_resource(RESOURCE_ID_IMAGE_BACKGROUND);
  s_res_font_rubik_mono_35 = fonts_load_custom_font(resource_get_handle(RESOURCE_ID_FONT_RUBIK_MONO_35));
  // s_bitmaplayer_background
  s_bitmaplayer_background = bitmap_layer_create(GRect(0, 0, 144, 168));
  bitmap_layer_set_bitmap(s_bitmaplayer_background, s_res_image_background);
  bitmap_layer_set_background_color(s_bitmaplayer_background, GColorBlack);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_bitmaplayer_background);
  
  // s_textlayer_date
  s_textlayer_date = text_layer_create(GRect(-3, 21, 150, 35));
  text_layer_set_background_color(s_textlayer_date, GColorClear);
  text_layer_set_text(s_textlayer_date, "00 00");
  text_layer_set_font(s_textlayer_date, s_res_font_rubik_mono_35);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_date);
  
  // s_textlayer_time
  s_textlayer_time = text_layer_create(GRect(-3, -6, 150, 35));
  text_layer_set_background_color(s_textlayer_time, GColorClear);
  text_layer_set_text_color(s_textlayer_time, GColorWhite);
  text_layer_set_text(s_textlayer_time, "00 00");
  text_layer_set_font(s_textlayer_time, s_res_font_rubik_mono_35);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_time);
}

static void destroy_ui(void) {
  window_destroy(s_window);
  bitmap_layer_destroy(s_bitmaplayer_background);
  text_layer_destroy(s_textlayer_date);
  text_layer_destroy(s_textlayer_time);
  gbitmap_destroy(s_res_image_background);
  fonts_unload_custom_font(s_res_font_rubik_mono_35);
}
// END AUTO-GENERATED UI CODE


// BEGIN CUSTOM CODE

// set texts of layers
void set_texts(char time_text[], char date_text[]) {
  text_layer_set_text(s_textlayer_time, time_text);
  text_layer_set_text(s_textlayer_date, date_text);
 }

static void handle_window_unload(Window* window) {
  destroy_ui();
}

void show_face(void) {
  initialise_ui();
  window_set_window_handlers(s_window, (WindowHandlers) {
    .unload = handle_window_unload,
  });
  window_stack_push(s_window, true);
}

void hide_face(void) {
  window_stack_remove(s_window, true);
}
