#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL

// above is out of the box
// below is me

// utility things 
#define LOCKED KC_TRANSPARENT // KEEP TRANPARENT
#define BLANK KC_NO // DON'T ALLOW TRANSPARENCY
#define BROKEN KC_NO 
#define NOTHING KC_NO

// some stuff to prevent mod tap keys from
// doing other than what i am trying to do
#define IGNORE_MOD_TAP_INTERRUPT
#undef PERMISSIVE_HOLD
#undef PREVENT_STUCK_MODIFIERS

// macro
#define MACRO1_REC DYN_REC_START1
#define MACRO2_REC DYN_REC_START2
#define MACRO_STOP DYN_REC_STOP
#define MACRO1_PLAY DYN_MACRO_PLAY1
#define MACRO2_PLAY DYN_MACRO_PLAY2

// media
#define VOL_UP KC_AUDIO_VOL_UP
#define NEXT KC_MEDIA_NEXT_TRACK
#define PREV KC_MEDIA_PREV_TRACK
#define VOL_DN KC_AUDIO_VOL_DOWN
#define MUTE KC_AUDIO_MUTE
#define PLAY_PAUSE KC_MEDIA_PLAY_PAUSE

// control keys
#define TAB_OR_CMD LGUI_T(KC_TAB)
#define BKSP_OR_CMD RGUI_T(KC_BSPACE)
#define HYPER KC_HYPR
#define SHIFT_TAB LSFT(KC_TAB)
#define L_SHIFT KC_LSFT
#define L_ALT KC_LALT
#define L_CTRL MT(MOD_LCTL, KC_ESC)
#define R_SHIFT KC_RSFT
#define R_ALT KC_RALT
#define R_CTRL KC_RCTL

// letters that switch layers
#define A_PARENS LT(PARENS, KC_A)
#define COLON_PARENS LT(PARENS, KC_SCOLON)
#define S_MOUSE LT(MOUSE, KC_S)
#define D_D_PAD LT(D_PAD, KC_D)
#define F_SYMBOLS LT(SYMBOLS, KC_F)
#define G_NUMBERS LT(NUMBERS, KC_G)
#define J_ESCAPE LT(ESCAPE_LAYER, KC_J)
#define Z_HYPER HYPR_T(KC_Z)

// punctuation
#define SPACE KC_SPACE
#define PERIOD KC_DOT
#define ENTER KC_ENTER
#define LESS_THAN KC_LEFT_ANGLE_BRACKET
#define GREATER_THAN KC_RIGHT_ANGLE_BRACKET
#define L_PAREN KC_LEFT_PAREN
#define R_PAREN KC_RIGHT_PAREN
#define L_BRACKET KC_LBRC
#define R_BRACKET KC_RBRC
#define L_CURLY KC_LCBR
#define R_CURLY KC_RCBR

// keypad Number pad
#define PLUS KC_PLUS
#define MINUS KC_MINUS
#define DIVIDE KC_SLASH
#define MULTIPLY KC_ASTERISK
#define EQUAL KC_EQUAL
#define DECIMAL KC_DOT

// colors
#define RED 255,0,0
#define ORANGE 255,50,0
#define YELLOW 255,125,0
#define GREEN 0,200,0
#define BLUE 0,0,255
#define PURPLE 75,0,200

#define ALPHA_KEYS LAYOUT_ergodox_pretty(\
      TO(ALPHA)  ,   TO(COLORS)  ,     _______   ,     _______   ,     _______   ,     _______   ,    _______    ,                                                                                   TO(ALPHA)   ,  TO(NUMBERS)  ,   TO(PARENS)  ,  TO(SYMBOLS)  ,   TO(MOUSE)   ,    MO(D_PAD)  ,     BLANK     , \
      _______    ,      KC_Q     ,        KC_W   ,        KC_E   ,        KC_R   ,       KC_T    ,    _______    ,                                                                                   _______     ,     KC_Y     ,        KC_U    ,       KC_I    ,       KC_O    ,        KC_P   ,   NOTHING     , \
      L_CTRL     ,    A_PARENS   ,     S_MOUSE   ,     D_D_PAD   ,   F_SYMBOLS   ,  G_NUMBERS    ,                                                                                                                     KC_H     ,     J_ESCAPE   ,       KC_K    ,       KC_L    , COLON_PARENS  ,    R_CTRL     , \
      L_SHIFT    ,    Z_HYPER    ,        KC_X   ,     KC_C      ,       KC_V    ,       KC_B    ,    _______    ,                                                                                   _______     ,     KC_N     ,        KC_M    ,    KC_COMMA   ,      PERIOD   ,     KC_SLASH  ,   R_SHIFT     , \
      NOTHING    ,    NOTHING    ,       L_ALT   ,     _______   ,     _______   ,                                                                                                                                                     _______   ,     _______   ,     _______   ,     NOTHING   ,   BROKEN      , \
                                                                                                                       KC_CAPS   ,     TO(ALPHA) ,                    TO(ALPHA)  ,      KC_0     ,               \
                                                                                                                                       _______   ,                    _______    ,                               \
                                                                                                       ENTER     ,  TAB_OR_CMD   ,     _______   ,                    _______    ,  BKSP_OR_CMD  ,    SPACE      \
)

#define NUMBER_KEYS LAYOUT_ergodox_pretty(\
       _______   ,     _______   ,     _______   ,     _______   ,    _______    ,    _______    ,    LOCKED     ,                                                                                    LOCKED     ,     LOCKED    ,     LOCKED    ,     LOCKED    ,     LOCKED    ,    LOCKED     ,    DIVIDE     ,\
       _______   ,     _______   ,     _______   ,     _______   ,    _______    ,    _______    ,    _______    ,                                                                                    _______    ,     _______   ,        KC_7   ,      KC_8     ,     KC_9      ,    _______    ,    MULTIPLY   ,\
       _______   ,     _______   ,     _______   ,     _______   ,    _______    ,    _______    ,                                                                                                                     _______   ,        KC_4   ,      KC_5     ,     KC_6      ,    _______    ,    MINUS      ,\
       _______   ,     _______   ,     _______   ,     _______   ,    _______    ,    _______    ,    _______    ,                                                                                    EQUAL      ,      KC_0     ,        KC_1   ,      KC_2     ,     KC_3      ,    _______    ,    PLUS       ,\
       _______   ,     _______   ,     _______   ,     _______   ,    _______    ,                                                                                                                                                     DECIMAL   ,     _______   ,     KC_0      ,    _______    ,    BROKEN     ,\
                                                                                                                       _______   ,     _______   ,                     _______   ,     _______   ,               \
                                                                                                                                       _______   ,                     _______   ,                               \
                                                                                                       ENTER     ,  TAB_OR_CMD   ,     _______   ,                     _______   ,  BKSP_OR_CMD  ,     KC_0      \
)

#define PAREN_KEYS LAYOUT_ergodox_pretty(\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     LOCKED    ,                                                                                     LOCKED    ,     LOCKED    ,     LOCKED    ,     LOCKED    ,     LOCKED    ,    LOCKED     ,     BLANK     ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                     _______   ,     _______   ,    L_PAREN    ,    R_PAREN    ,     KC_QUOTE  , RSFT(KC_QUOTE),     _______   ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                                                   LESS_THAN   ,    L_BRACKET  ,    R_BRACKET  ,  GREATER_THAN ,     _______   ,     _______   ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                     _______   ,     _______   ,    L_CURLY    ,    R_CURLY    ,     _______   ,     _______   ,     _______   ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                                                                                     _______   ,     _______   ,     _______   ,     _______   ,     BROKEN    ,\
                                                                                                                       _______   ,     _______   ,                     _______   ,     _______   ,               \
                                                                                                                                       _______   ,                     _______   ,                               \
                                                                                                       _______   ,     _______   ,     _______   ,                     _______   ,     _______   ,     SPACE     \
)

#define SYMBOL_KEYS LAYOUT_ergodox_pretty(\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,    _______    ,     LOCKED    ,                                                                                     LOCKED    ,     LOCKED    ,     LOCKED    ,     LOCKED    ,     LOCKED    ,    LOCKED     ,     BLANK     ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                     _______   ,    KC_GRAVE   , KC_AMPERSAND  ,  KC_ASTERISK  ,     KC_PIPE   ,   KC_BSLS     ,     _______   ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                                                    KC_TILDE   ,   KC_DOLLAR   ,   KC_PERCENT  , KC_CIRCUMFLEX ,    MINUS      ,     _______   ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                    _______    ,      MINUS    ,   KC_EXCLAIM  ,     KC_AT     ,     KC_HASH   , KC_UNDERSCORE ,     _______   ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                                                                                     _______   ,     _______   ,     _______   ,    _______    ,     BROKEN    ,\
                                                                                                                       _______   ,     _______   ,                     _______   ,     _______   ,               \
                                                                                                                                       _______   ,                     _______   ,                               \
                                                                                                       _______   ,     _______   ,     _______   ,                     _______   ,     _______   ,     SPACE     \
)

#define MOUSE_KEYS LAYOUT_ergodox_pretty(\
       _______   ,     _______   ,     _______   ,     _______   ,    _______    ,     _______   ,     LOCKED    ,                                                                                     LOCKED    ,     LOCKED    ,     LOCKED    ,    LOCKED     ,    LOCKED     ,    LOCKED     ,     RESET     ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                    _______    ,     _______   ,     _______   ,    _______    ,    _______    ,   KC_MS_BTN2  ,     _______   ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                                                   KC_MS_LEFT  ,   KC_MS_DOWN  ,    KC_MS_UP   ,  KC_MS_RIGHT  ,   KC_MS_BTN1  ,     _______   ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                    _______    ,     _______   ,     _______   ,   _______     ,    _______    ,     _______   ,     _______   ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                                                                                     _______   ,   _______     ,    _______    ,     _______   ,     BROKEN    ,\
                                                                                                                      _______    ,    _______    ,                     _______   ,    _______   ,                \
                                                                                                                                      _______    ,                     _______   ,                               \
                                                                                                      _______    ,    _______    ,    _______    ,                     _______   ,    _______   ,   _______      \
)

#define D_PAD_KEYS LAYOUT_ergodox_pretty(\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     LOCKED    ,                                                                                     LOCKED    ,     LOCKED    ,     LOCKED    ,     LOCKED    ,     LOCKED    ,    LOCKED     ,     KC_POWER  ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,    _______    ,     _______   ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                                                     KC_LEFT   ,     KC_DOWN   ,     KC_UP     ,     KC_RIGHT  ,    _______    ,     _______   ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,    _______    ,     _______   ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                                                                                     _______   ,     _______   ,     _______   ,    _______    ,     BROKEN    ,\
                                                                                                                       _______   ,    _______    ,                     _______   ,    _______    ,               \
                                                                                                                                      _______    ,                     _______   ,                               \
                                                                                                       _______   ,     _______   ,    _______    ,                     _______   ,    _______    ,     SPACE     \
)

#define COLOR_KEYS LAYOUT_ergodox_pretty(\
      _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,                                                                                    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,\
      _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,                                                                                    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,\
      _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,                                                                                                                    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,\
      RED_ON     ,   ORANGE_ON   ,   YELLOW_ON   ,   GREEN_ON    ,    BLUE_ON    ,   PURPLE_ON   ,    _______    ,                                                                                    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,\
      _______    ,   _______     ,    _______    ,    _______    ,    _______    ,                                                                                                                                                    _______    ,     _______   ,     _______   ,    _______    ,    BROKEN     ,\
                                                                                                                      _______   ,    _______    ,                      _______   ,    _______    ,               \
                                                                                                                                     _______    ,                      _______   ,                               \
                                                                                                      _______   ,     _______   ,    _______    ,                      _______   ,    _______    ,     SPACE     \
)

#define ESCAPE_LAYER_KEYS LAYOUT_ergodox_pretty(\
      _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,                                                                                    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,\
      _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,                                                                                    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,\
      _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,                                                                                                                    _______    ,    _______    ,   KC_ESCAPE   ,    _______    ,    _______    ,    _______    ,\
      _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,                                                                                    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,    _______    ,\
      _______    ,    _______   ,     _______    ,    _______    ,    _______    ,                                                                                                                                                    _______    ,     _______   ,     _______   ,    _______    ,    BROKEN     ,\
                                                                                                                      _______   ,    _______    ,                      _______   ,    _______    ,               \
                                                                                                                                     _______    ,                      _______   ,                               \
                                                                                                      _______   ,     _______   ,    _______    ,                      _______   ,    _______    ,     SPACE     \
)

enum custom_keycodes {
RED_ON = EZ_SAFE_RANGE,
ORANGE_ON,
YELLOW_ON,
GREEN_ON,
BLUE_ON,
PURPLE_ON,
SLEEP
};

enum layers {
ALPHA,
PARENS,
MOUSE,
D_PAD,
SYMBOLS,
NUMBERS,
ESCAPE_LAYER,
COLORS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [ALPHA] = ALPHA_KEYS,
  [NUMBERS] = NUMBER_KEYS,
  [PARENS] = PAREN_KEYS,
  [SYMBOLS] = SYMBOL_KEYS,
  [MOUSE] = MOUSE_KEYS,
  [D_PAD] = D_PAD_KEYS,
  [COLORS] = COLOR_KEYS,
  [ESCAPE_LAYER] = ESCAPE_LAYER_KEYS,
};


rgblight_config_t rgblight_config;

void light_color(int red, int green, int blue) {
  #ifdef RGBLIGHT_ENABLE
    rgblight_enable();
    rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
    rgblight_setrgb(red, green, blue);
  #endif
}
 
bool light_on_key_press(keyrecord_t *record, int red, int green, int blue) {
  
  if (record->event.pressed) {
    light_color(red, green, blue);  
    return false;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RED_ON:
      return light_on_key_press(record, RED);
    case ORANGE_ON:
      return light_on_key_press(record, ORANGE);
    case YELLOW_ON:
      return light_on_key_press(record, YELLOW);
    case GREEN_ON:
      return light_on_key_press(record, GREEN);
    case BLUE_ON:
      return light_on_key_press(record, BLUE);
    case PURPLE_ON:
      return light_on_key_press(record, PURPLE);
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_led_all_off();

    switch (layer) {
      case ALPHA:
        light_color(YELLOW);
        break;
      case PARENS:
        ergodox_right_led_1_on();
        light_color(RED);
        break;
      case MOUSE:
        ergodox_right_led_2_on();
        light_color(ORANGE);
        break;
      case D_PAD:
        ergodox_right_led_3_on();
        light_color(YELLOW);
        break;
      case SYMBOLS:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        light_color(GREEN);
        break;
      case NUMBERS:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        light_color(BLUE);
        break;
      case ESCAPE_LAYER:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        light_color(PURPLE);
        break;
      case COLORS:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        rgblight_mode(RGBLIGHT_MODE_RAINBOW_SWIRL);
        break;
      default:
        break;
    }
    return state;
};

void keyboard_post_init_user(void) {
  layer_state_set_user(layer_state);
}
