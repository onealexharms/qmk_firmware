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

// utility things 
#define XXXXXXXX KC_NO
#define KNOB KC_NO

// macro
#define MACRO1_REC DYN_REC_START1
#define MACRO2_REC DYN_REC_START2
#define MACRO_STOP DYN_REC_STOP
#define MACRO1_PLAY DYN_MACRO_PLAY1
#define MACRO2_PLAY DYN_MACRO_PLAY2

// media
#define VOL_UP KC_AUDIO_VOL_UP
#define NEXT KC_MEDIA_FAST_FORWARD
#define PREV KC_MEDIA_REWIND
#define VOL_DOWN KC_AUDIO_VOL_DOWN
#define MUTE KC_AUDIO_MUTE
#define PLAY_PAUSE KC_MEDIA_PLAY_PAUSE

// mouse
#define RIGHT_CLICK KC_MS_BTN2
#define LEFT_CLICK KC_MS_BTN1
#define MOUSE_LEFT KC_MS_LEFT
#define MOUSE_RIGHT KC_MS_RIGHT
#define MOUSE_UP KC_MS_UP
#define MOUSE_DOWN KC_MS_DOWN

// control keys
#define TAB_OR_CMD LGUI_T(KC_TAB)
#define BKSP_OR_CMD RGUI_T(KC_BSPACE)
#define HYPER KC_HYPR
#define SHIFT_TAB LSFT(KC_TAB)
#define L_SHIFT KC_LSFT
#define L_ALT KC_LALT
#define L_CTRL_ESC MT(MOD_LCTL, KC_ESC)
#define R_SHIFT KC_RSFT
#define R_ALT KC_RALT
#define R_CTRL_ESC MT(MOD_RCTL, KC_ESC)

// layer-switching keys
#define A_PARENS LT(PARENS, KC_A)
#define S_ALPHA LT(ALPHA, KC_S)
#define D_NAV LT(NAVIGATION, KC_D)
#define F_SYMBOLS LT(SYMBOLS, KC_F)
#define G_NUMBERS LT(NUMBERS, KC_G)
#define H_NUMBERS LT(NUMBERS, KC_H)
#define J_SYMBOLS LT(SYMBOLS, KC_J)
#define K_NAV LT(NAVIGATION, KC_K)
#define L_ALPHA LT(ALPHA, KC_L)
#define COLON_PARENS LT(PARENS, KC_SCOLON)
#define Z_HYPER HYPR_T(KC_Z)

// numberw layer symbols 
#define PLUS KC_PLUS
#define MINUS KC_MINUS
#define DIVIDE KC_SLASH
#define MULTIPLY KC_ASTERISK
#define EQUAL KC_EQUAL
#define DECIMAL KC_DOT

// alpha layer symbols
#define SPACE KC_SPACE
#define PERIOD KC_DOT
#define ENTER KC_ENTER
#define LESS_THAN KC_LEFT_ANGLE_BRACKET
#define GREATER_THAN KC_RIGHT_ANGLE_BRACKET

// parens layer symbols
#define L_PAREN KC_LEFT_PAREN
#define R_PAREN KC_RIGHT_PAREN
#define L_BRACKET KC_LBRC
#define R_BRACKET KC_RBRC
#define L_CURLY KC_LCBR
#define R_CURLY KC_RCBR

// symbols layer symbols
#define AMPERSAND KC_AMPERSAND
#define ASTERISK KC_ASTERISK
#define AT_SIGN KC_AT
#define BACKSLASH KC_BSLS
#define BACKTICK KC_GRAVE
#define CARET KC_CIRCUMFLEX
#define DBL_QUOTE RSFT(KC_QUOTE)
#define DOLLAR KC_DOLLAR
#define EXCLAMATION KC_EXCLAIM
#define HASH KC_HASH
#define PERCENT KC_PERCENT
#define PIPE KC_PIPE
#define QUOTE KC_QUOTE
#define TILDE KC_TILDE
#define UNDERSCORE KC_UNDERSCORE

// colors
#define RED 255,0,0
#define ORANGE 255,50,0
#define YELLOW 255,125,0
#define GREEN 0,200,0
#define BLUE 0,0,255
#define PURPLE 75,0,200

#define ALPHA_KEYS LAYOUT_ergodox_pretty(\
      XXXXXXXX   ,    XXXXXXXX   ,     XXXXXXXX  ,     XXXXXXXX  ,     XXXXXXXX  ,     XXXXXXXX  ,    XXXXXXXX   ,                                                                                   XXXXXXXX    ,    XXXXXXXX   ,      XXXXXXXX  ,     XXXXXXXX  ,     XXXXXXXX  ,     XXXXXXXX  ,   XXXXXXXX    , \
      KNOB       ,      KC_Q     ,        KC_W   ,        KC_E   ,        KC_R   ,       KC_T    ,    XXXXXXXX   ,                                                                                   XXXXXXXX    ,     KC_Y      ,        KC_U    ,       KC_I    ,        KC_O   ,        KC_P   ,   KNOB        , \
      L_CTRL_ESC ,    A_PARENS   ,     S_ALPHA   ,     D_NAV       ,   F_SYMBOLS   ,  G_NUMBERS    ,                                                                                                                  H_NUMBERS  ,     J_SYMBOLS  ,     K_NAV     ,     L_ALPHA   , COLON_PARENS  ,    R_CTRL_ESC , \
      L_SHIFT    ,    Z_HYPER    ,        KC_X   ,     KC_C      ,       KC_V    ,       KC_B    ,    XXXXXXXX   ,                                                                                   XXXXXXXX    ,     KC_N      ,        KC_M    ,    KC_COMMA   ,      PERIOD   ,     KC_SLASH  ,   R_SHIFT     , \
      XXXXXXXX   ,    XXXXXXXX   ,       L_ALT   ,     _______   ,     _______   ,                                                                                                                                                      _______   ,     _______   ,       R_ALT   ,      XXXXXXXX ,    XXXXXXXX   , \
                                                                                                                       KC_CAPS   ,     TO(ALPHA) ,                    TO(ALPHA)  ,      KC_0     ,               \
                                                                                                                                       XXXXXXXX  ,                    XXXXXXXX   ,                               \
                                                                                                       ENTER     ,  TAB_OR_CMD   ,     XXXXXXXX  ,                    XXXXXXXX   ,  BKSP_OR_CMD  ,    SPACE      \
)

#define NUMBER_KEYS LAYOUT_ergodox_pretty(\
       XXXXXXXX  ,     XXXXXXXX  ,     XXXXXXXX  ,     XXXXXXXX  ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,                                                                                    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX    ,   XXXXXXXX    ,    XXXXXXXX   ,\
       KNOB      ,     _______   ,     _______   ,     _______   ,    _______    ,    _______    ,    XXXXXXXX   ,                                                                                    XXXXXXXX   ,     _______   ,        KC_7   ,      KC_8     ,     KC_9       ,    DIVIDE     ,    KNOB       ,\
       L_CTRL_ESC,     _______   ,     _______   ,     _______   ,    _______    ,    _______    ,                                                                                                                     PLUS      ,        KC_4   ,      KC_5     ,     KC_6       ,    MULTIPLY   ,    R_CTRL_ESC ,\
       L_SHIFT   ,     _______   ,     _______   ,     _______   ,    _______    ,    _______    ,    XXXXXXXX   ,                                                                                    XXXXXXXX   ,     MINUS     ,        KC_1   ,      KC_2     ,     KC_3       ,    EQUAL      ,    R_SHIFT    ,\
       XXXXXXXX  ,     XXXXXXXX  ,     L_ALT     ,     _______   ,    _______    ,                                                                                                                                                        KC_0   ,     _______   ,     DECIMAL    ,    XXXXXXXX   ,    XXXXXXXX   ,\
                                                                                                                       _______   ,     TO(ALPHA) ,                     TO(ALPHA) ,     KC_0      ,               \
                                                                                                                                       XXXXXXXX  ,                     XXXXXXXX  ,                               \
                                                                                                       ENTER     ,  TAB_OR_CMD   ,     XXXXXXXX  ,                     XXXXXXXX  ,  BKSP_OR_CMD  ,     SPACE     \
)

#define PAREN_KEYS LAYOUT_ergodox_pretty(\
       XXXXXXXX  ,     XXXXXXXX  ,     XXXXXXXX  ,     XXXXXXXX  ,     XXXXXXXX  ,    XXXXXXXX   ,    XXXXXXXX   ,                                                                                    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,   XXXXXXXX    ,    XXXXXXXX   ,\
       KNOB      ,     RED_ON    ,     GREEN_ON  ,     PREV      ,     NEXT      ,     VOL_UP    ,    XXXXXXXX   ,                                                                                    XXXXXXXX   ,     _______   ,    L_PAREN    ,    R_PAREN    ,     QUOTE     ,   DBL_QUOTE   ,    KNOB       ,\
       L_CTRL_ESC,     ORANGE_ON ,     BLUE_ON   ,     MUTE      ,     PLAY_PAUSE,     VOL_DOWN  ,                                                                                                                   LESS_THAN   ,    L_BRACKET  ,    R_BRACKET  ,  GREATER_THAN ,     _______   ,    R_CTRL_ESC ,\
       L_SHIFT   ,     YELLOW_ON ,     PURPLE_ON ,     _______   ,     _______   ,     _______   ,    XXXXXXXX   ,                                                                                    XXXXXXXX   ,     _______   ,    L_CURLY    ,    R_CURLY    ,     _______   ,     _______   ,    R_SHIFT    ,\
       XXXXXXXX  ,     XXXXXXXX  ,     L_ALT     ,     _______   ,     _______   ,                                                                                                                                                     _______   ,     _______   ,     R_ALT     ,   XXXXXXXX    ,     XXXXXXXX  ,\
                                                                                                                       _______   ,     TO(ALPHA) ,                     TO(ALPHA) ,     KC_0      ,               \
                                                                                                                                       XXXXXXXX  ,                     XXXXXXXX  ,                               \
                                                                                                       ENTER     ,   TAB_OR_CMD  ,     XXXXXXXX  ,                     XXXXXXXX  ,   BKSP_OR_CMD ,     SPACE     \
)

#define SYMBOL_KEYS LAYOUT_ergodox_pretty(\
       XXXXXXXX  ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,                                                                                    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,   XXXXXXXX    ,    XXXXXXXX   ,\
       KNOB      ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,    XXXXXXXX   ,                                                                                    XXXXXXXX   ,   BACKTICK    ,    AMPERSAND  ,     ASTERISK  ,    TILDE      ,   BACKSLASH   ,    KNOB       ,\
       L_CTRL_ESC,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                                                     MINUS     ,      DOLLAR   ,      PERCENT  ,    CARET      ,    PIPE       ,    R_CTRL_ESC ,\
       L_SHIFT   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,    XXXXXXXX   ,                                                                                     XXXXXXXX  ,   UNDERSCORE  , EXCLAMATION   ,     AT_SIGN   ,    HASH       ,   _______     ,    R_SHIFT    ,\
       XXXXXXXX  ,    XXXXXXXX   ,     L_ALT     ,     _______   ,     _______   ,                                                                                                                                                     _______   ,     _______   ,     _______   ,   XXXXXXXX    ,    XXXXXXXX   ,\
                                                                                                                       _______   ,    TO(ALPHA)  ,                     TO(ALPHA) ,     KC_0      ,               \
                                                                                                                                      XXXXXXXX   ,                     XXXXXXXX  ,                               \
                                                                                                       ENTER    ,     TAB_OR_CMD ,    XXXXXXXX   ,                     XXXXXXXX  ,   BKSP_OR_CMD ,     SPACE     \
)

#define NAVIGATION_KEYS LAYOUT_ergodox_pretty(\
      XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,                                                                                    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,    XXXXXXXX   ,   XXXXXXXX    ,     XXXXXXXX  ,\
       KNOB      ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,    XXXXXXXX   ,                                                                                    XXXXXXXX   ,     _______   ,     RESET     ,     _______   ,     _______   ,    _______    ,     KNOB      ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,                                                                                                                     KC_LEFT   ,     KC_DOWN   ,     KC_UP     ,     KC_RIGHT  ,   LEFT_CLICK  ,     _______   ,\
       _______   ,     _______   ,     _______   ,     _______   ,     _______   ,     _______   ,    XXXXXXXX   ,                                                                                    XXXXXXXX   ,    MOUSE_LEFT ,  MOUSE_DOWN   ,    MOUSE_UP   ,  MOUSE_RIGHT  ,   RIGHT_CLICK ,     _______   ,\
      XXXXXXXX   ,    XXXXXXXX   ,     _______   ,     _______   ,     _______   ,                                                                                                                                                     _______   ,     _______   ,     _______   ,   XXXXXXXX    ,     XXXXXXXX  ,\
                                                                                                                       _______   ,   TO(ALPHA)   ,                     TO(ALPHA)  ,    KC_0       ,               \
                                                                                                                                     XXXXXXXX    ,                     XXXXXXXX   ,                               \
                                                                                                       ENTER     ,    TAB_OR_CMD ,   XXXXXXXX    ,                     XXXXXXXX   ,  BKSP_OR_CMD  ,     SPACE     \
)

enum custom_keycodes {
RED_ON = SAFE_RANGE,
ORANGE_ON,
YELLOW_ON,
GREEN_ON,
BLUE_ON,
PURPLE_ON,
};

enum layers {
ALPHA,
PARENS,
NAVIGATION,
SYMBOLS,
NUMBERS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [ALPHA] = ALPHA_KEYS,
  [NUMBERS] = NUMBER_KEYS,
  [PARENS] = PAREN_KEYS,
  [SYMBOLS] = SYMBOL_KEYS,
  [NAVIGATION] = NAVIGATION_KEYS,
};


rgblight_config_t rgblight_config;
bool capslock_is_on = false;
bool KEY_NEEDS_HANDLING = true;
bool KEY_IS_HANDLED = false;

void light_color(int red, int green, int blue) {
  #ifdef RGBLIGHT_ENABLE
    rgblight_enable();
    rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
    rgblight_setrgb(red, green, blue);
  #endif
}
 
void toggle_capslock(keyrecord_t *record) {
  capslock_is_on = !capslock_is_on;
  if (capslock_is_on) {
    ergodox_right_led_1_on();
    light_color(RED);
  } else {
    ergodox_right_led_1_off();
    light_color(YELLOW);
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_CAPS:
      if (record->event.pressed) {
        toggle_capslock(record);
      }
      return true;
    case RED_ON:
      light_color(RED);
      return KEY_IS_HANDLED;
    case ORANGE_ON:
      light_color(ORANGE);
      return KEY_IS_HANDLED;
    case YELLOW_ON:
      light_color(YELLOW);
      return KEY_IS_HANDLED;
    case GREEN_ON:
      light_color(GREEN);
      return KEY_IS_HANDLED;
    case BLUE_ON:
      light_color(BLUE);
      return KEY_IS_HANDLED;
    case PURPLE_ON:
      light_color(PURPLE);
      return KEY_IS_HANDLED;
    default:
      return KEY_NEEDS_HANDLING;
  }
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    switch (layer) {
      case ALPHA:
        light_color(YELLOW);
        break;
      case PARENS:
        light_color(PURPLE);
        break;
      case NAVIGATION:
        light_color(ORANGE);
        break;
      case SYMBOLS:
        light_color(GREEN);
        break;
      case NUMBERS:
        light_color(BLUE);
        break;
      default:
        break;
    }
    return state;
};

void keyboard_post_init_user(void) {
  layer_state_set_user(layer_state);
}
