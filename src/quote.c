#include "quote.h"
#include <pebble.h>

// BEGIN AUTO-GENERATED UI CODE; DO NOT MODIFY
static Window *s_window;
static GFont s_res_gothic_24_bold;
static TextLayer *s_textlayer_quote;

static void initialise_ui(void) {
  s_window = window_create();
  window_set_fullscreen(s_window, 1);
  
  s_res_gothic_24_bold = fonts_get_system_font(FONT_KEY_GOTHIC_24_BOLD);
  // s_textlayer_quote
  s_textlayer_quote = text_layer_create(GRect(0, 0, 144, 2000));
  text_layer_set_text(s_textlayer_quote, "Text layer");
  text_layer_set_font(s_textlayer_quote, s_res_gothic_24_bold);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_textlayer_quote);
}

static void destroy_ui(void) {
  window_destroy(s_window);
  text_layer_destroy(s_textlayer_quote);
}
// END AUTO-GENERATED UI CODE


#define WINDOW_HEIGHT 168
#define WINDOW_WIDTH 144  
#define TEXTBOX_HEIGH 2000

#define NO_OF_QUOTES 472
  
  
int aQuotePointers[NO_OF_QUOTES] = {0, 206, 354, 417, 480, 554, 662, 695, 757, 839, 1259, 1485, 1595, 1694, 1778, 1817, 1959, 2136, 2228, 2451, 2567, 2825, 2927, 3247, 3430, 3564, 3609, 3685, 3890, 4259, 4461, 4646, 4816, 5048, 5391, 5642, 5773, 6048, 6261, 6412, 7079, 7252, 7665, 7755, 7873, 8112, 8983, 9262, 9466, 9660, 9965, 10170, 10748, 10907, 11644, 12036, 12564, 12950, 13024, 13295, 14158, 14876, 15304, 15423, 15608, 16097, 16186, 16354, 16789, 16975, 17194, 17739, 17861, 18097, 18550, 18820, 19035, 19213, 19412, 19512, 19770, 20230, 20349, 20536, 20669, 21230, 21472, 21649, 21814, 22114, 22247, 22404, 22682, 22811, 23015, 23495, 23569, 24042, 24116, 24304, 24429, 24497, 24932, 25206, 25358, 25529, 25970, 26054, 26256, 26672, 26928, 27021, 27102, 27234, 27344, 27592, 28023, 28143, 28447, 28984, 29253, 29476, 29725, 29968, 30041, 31117, 31217, 31349, 31442, 31557, 31737, 31788, 31870, 31936, 32106, 32305, 32378, 32478, 32667, 33028, 33096, 34350, 34575, 34900, 34969, 35109, 35205, 35277, 35400, 35540, 35983, 36041, 36854, 37060, 37216, 37837, 37956, 37982, 38125, 38242, 38361, 39283, 39826, 40310, 40828, 41468, 41721, 41826, 41888, 42142, 42192, 42513, 43140, 43263, 43336, 43537, 43599, 43670, 43728, 43794, 43984, 44310, 44549, 44652, 44809, 44921, 45041, 45205, 45349, 45585, 45858, 46005, 46043, 46075, 46206, 46291, 46339, 46593, 46695, 46935, 47025, 47115, 47272, 47510, 47637, 47994, 48060, 48255, 48359, 48758, 49208, 49405, 49624, 50097, 50508, 50589, 50659, 50976, 51039, 51247, 51302, 51377, 51554, 51653, 51790, 51826, 51907, 51969, 52052, 52256, 52376, 52532, 52663, 52838, 52905, 52992, 53128, 53211, 53307, 53403, 53534, 53892, 54186, 54473, 54517, 54777, 54990, 55045, 55213, 55273, 55803, 55848, 55964, 56072, 56373, 56579, 56680, 56992, 57059, 57187, 57289, 57342, 57463, 57491, 57545, 57603, 57895, 58097, 58213, 58294, 58607, 58652, 58820, 58910, 59001, 59127, 59211, 59333, 59480, 59643, 59770, 60086, 60322, 60418, 60604, 60754, 60951, 61329, 61610, 62004, 62080, 62211, 62306, 62420, 62682, 62840, 62933, 63168, 63287, 63397, 63581, 64049, 64151, 64212, 64342, 64443, 64520, 64778, 64909, 65183, 65298, 65545, 65770, 65830, 66032, 66118, 66231, 66371, 67024, 67098, 67235, 67520, 67709, 68040, 68192, 68325, 68605, 68786, 68851, 68944, 69031, 69472, 69508, 69749, 69942, 70025, 70197, 70270, 70435, 70531, 70642, 70907, 71366, 71482, 71566, 71651, 71778, 72015, 72222, 72504, 73003, 73205, 73326, 73406, 73520, 73575, 73673, 73773, 73891, 73951, 74055, 74165, 74443, 74453, 74582, 74628, 74769, 75020, 75289, 75453, 75523, 75589, 75723, 75848, 75952, 76214, 76396, 76499, 76543, 76665, 76703, 76766, 76878, 77010, 77195, 77300, 77387, 77465, 77555, 77704, 77851, 77916, 78025, 78079, 78226, 78417, 78538, 78639, 78764, 78937, 79118, 79176, 79314, 79483, 79702, 79770, 79848, 79904, 79989, 80043, 80193, 80441, 80596, 80671, 80874, 80939, 81030, 81293, 81388, 81438, 81560, 81755, 81833, 81926, 82007, 82111, 82233, 82350, 82724, 82976, 83203, 83306, 83442, 83525, 83709, 83799, 84234, 84365, 84565, 84741, 84811, 85064, 85139, 85320, 85452, 85549, 85753, 85801, 85887, 85988, 86090, 86230, 86285, 86404, 87023, 87098, 87153, 87207, 87341, 87423, 87488, 87582, 87755, 87909, 87995, 88134, 88312, 88620, 88705, 88726, 88751, 88825};
uint8_t *quote;

static void handle_window_unload(Window* window) {
  free(quote); // freeing memory allocated for quote
  animation_unschedule_all(); //canceling all animations
  destroy_ui();
}

// animates layer by number of pixels
PropertyAnimation *s_box_animation;
int number_of_pixels;

// prototype so anim_stopped_handler can compile (implementation below)
void animate_quote(int numnber_of_pixels);

void anim_stopped_handler(Animation *animation, bool finished, void *context) {
  // Free the animation
  property_animation_destroy(s_box_animation);

  // Schedule the reverse animation, unless the app is exiting
  if (finished) {
    number_of_pixels = -number_of_pixels;
    animate_quote(number_of_pixels);
  }
}

void animate_quote(int pixels_to_scroll_by) {
  GRect start_frame = GRect(0, (pixels_to_scroll_by < 0? 0 : -pixels_to_scroll_by), WINDOW_WIDTH, TEXTBOX_HEIGH);
  GRect finish_frame =  GRect(0, (pixels_to_scroll_by < 0? pixels_to_scroll_by : 0), WINDOW_WIDTH, TEXTBOX_HEIGH);
  
  s_box_animation = property_animation_create_layer_frame(text_layer_get_layer(s_textlayer_quote), &start_frame, &finish_frame);
  animation_set_handlers((Animation*)s_box_animation, (AnimationHandlers) {
    .stopped = anim_stopped_handler
  }, NULL);
  animation_set_duration((Animation*)s_box_animation, abs(pixels_to_scroll_by) * 35); // delay is proportional to text size
  animation_set_curve((Animation*)s_box_animation, AnimationCurveLinear);  // setting equal speed animation
  animation_set_delay((Animation*)s_box_animation, 3000); //initial delay of 3 seconds to let user start reading quote

  animation_schedule((Animation*)s_box_animation);
}


void show_quote(void) {
  initialise_ui();
  window_set_window_handlers(s_window, (WindowHandlers) {
    .unload = handle_window_unload,
  });
  
  
  // { *********** loading quote

  // determining number of quote (that will give us address of begining and end)
  srand(time(NULL));
  int number_of_quote = rand() % NO_OF_QUOTES;
  
  //determining size of quote and allocating memory
  int size_of_quote = aQuotePointers[number_of_quote + 1] - aQuotePointers[number_of_quote] - 2;
  quote = malloc(size_of_quote);

  //loading quote, displaying and freeing memory
  ResHandle rh = resource_get_handle(RESOURCE_ID_FIREFLY_QUOTES);
  resource_load_byte_range(rh, aQuotePointers[number_of_quote] + 2, quote, size_of_quote);
  quote[size_of_quote - 1] = 0; //null terminating string
  text_layer_set_text(s_textlayer_quote, (char *)quote);
  
  // if height of quote > height of window, initiate animation to scroll
  GSize text_size = text_layer_get_content_size(s_textlayer_quote);
  number_of_pixels = WINDOW_HEIGHT - text_size.h;
  if (number_of_pixels < 0) {
      animate_quote(number_of_pixels);
  }
  
  // loading quote  *********** }
  
  window_stack_push(s_window, true);
}

void hide_quote(void) {
  window_stack_remove(s_window, true);
}
