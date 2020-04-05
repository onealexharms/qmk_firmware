#include QMK_KEYBOARD_H
#include "version.h"

// utility things 
#define XXXXXXXXXX KC_NO // there's no kyria key here
#define KNOB KC_NO // the knob on the kyria goes here
#define _________ KC_NO // available keys
#define SAME _______ // Transparent. Only use for same as alpha layer

// media control keys
#define VOL_UP KC_AUDIO_VOL_UP
#define NEXT KC_MEDIA_FAST_FORWARD
#define PREV KC_MEDIA_REWIND
#define VOL_DOWN KC_AUDIO_VOL_DOWN
#define MUTE KC_AUDIO_MUTE
#define PLAY_PAUSE KC_MEDIA_PLAY_PAUSE

// mouse keys
#define RIGHT_CLK  KC_MS_BTN2
#define LEFT_CLICK KC_MS_BTN1
#define MOUSE_LEFT KC_MS_LEFT
#define MOUSE_RT KC_MS_RIGHT
#define MOUSE_UP KC_MS_UP
#define MOUSE_DOWN KC_MS_DOWN

// control keys
#define  TAB_CMD LGUI_T(KC_TAB)
#define BKSP_CMD RGUI_T(KC_BSPACE)
#define HYPER KC_HYPR
#define SHIFT_TAB LSFT(KC_TAB)
#define L_SHIFT KC_LSFT
#define L_ALT KC_LALT
#define L_CTRL_ESC MT(MOD_LCTL, KC_ESC)
#define R_SHIFT KC_RSFT
#define R_ALT KC_RALT
#define R_CTRL_ESC MT(MOD_RCTL, KC_QUOTE)

// layer-switching keys
#define S_ALPHA LT(ALPHA, KC_S)
#define D_NAV LT(NAVIGATION, KC_D)
#define F_SYMBOLS LT(SYMBOLS, KC_F)
#define G_NUMBERS LT(NUMBERS, KC_G)
#define H_NUMBERS LT(NUMBERS, KC_H)
#define J_SYMBOLS LT(SYMBOLS, KC_J)
#define K_NAV LT(NAVIGATION, KC_K)
#define L_ALPHA LT(ALPHA, KC_L)
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
#define MORE_THAN  KC_RIGHT_ANGLE_BRACKET

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
#define COLONS KC_SCOLON
#define DOLLAR KC_DOLLAR
#define EXCLAMATION KC_EXCLAIM
#define HASH KC_HASH
#define PERCENT KC_PERCENT
#define PIPE KC_PIPE
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
   XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                              XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, \
       KNOB  ,     KC_Q  ,     KC_W  ,     KC_E  ,     KC_R  ,     KC_T  , XXXXXXXXXX,                              XXXXXXXXXX,     KC_Y  ,     KC_U  ,     KC_I  ,     KC_O  ,     KC_P  ,     KNOB  , \
   L_CTRL_ESC,     KC_A  ,  S_ALPHA  ,    D_NAV  , F_SYMBOLS , G_NUMBERS ,                                                       H_NUMBERS, J_SYMBOLS ,    K_NAV  ,  L_ALPHA  ,   COLONS  , R_CTRL_ESC, \
    L_SHIFT  ,  Z_HYPER  ,     KC_X ,     KC_C   ,     KC_V  ,     KC_B  , XXXXXXXXXX,                              XXXXXXXXXX,     KC_N  ,     KC_M  , KC_COMMA  ,   PERIOD  , KC_SLASH  ,  R_SHIFT  , \
   XXXXXXXXXX, XXXXXXXXXX,    L_ALT  , _________ , _________ ,                                                                              _________ , _________ ,    R_ALT  , XXXXXXXXXX, XXXXXXXXXX, \
                                                                            KC_CAPS  , TO(ALPHA) ,      TO(ALPHA) ,     KC_0  ,                                                                         \
                                                                                       XXXXXXXXXX,      XXXXXXXXXX,                                                                                     \
                                                                  ENTER  ,  TAB_CMD  , XXXXXXXXXX,      XXXXXXXXXX, BKSP_CMD  ,    SPACE                                                                \
)

#define NUMBER_KEYS LAYOUT_ergodox_pretty(\
   XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                              XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, \
       SAME  , _________ , _________ , _________ , _________ , _________ , XXXXXXXXXX,                              XXXXXXXXXX, _________ ,     KC_7  ,     KC_8  ,     KC_9  ,   DIVIDE  ,     SAME  , \
       SAME  , _________ , _________ , _________ , _________ , _________ ,                                                          PLUS  ,     KC_4  ,     KC_5  ,     KC_6  , MULTIPLY  ,     SAME  , \
       SAME  , _________ , _________ , _________ , _________ , _________ , XXXXXXXXXX,                              XXXXXXXXXX,    MINUS  ,     KC_1  ,     KC_2  ,     KC_3  ,    EQUAL  ,     SAME  , \
   XXXXXXXXXX, XXXXXXXXXX,     SAME  , _________ , _________ ,                                                                                  KC_0  , _________ ,  DECIMAL  , XXXXXXXXXX, XXXXXXXXXX, \
                                                                               SAME  ,     SAME  ,          SAME  ,     SAME  ,                                                                         \
                                                                                       XXXXXXXXXX,      XXXXXXXXXX,                                                                                     \
                                                                   SAME  ,     SAME  , XXXXXXXXXX,      XXXXXXXXXX,     SAME  ,     SAME                                                                \
)

#define SYMBOL_KEYS LAYOUT_ergodox_pretty(\
   XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                              XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, \
       SAME  , _________ , _________ , L_BRACKET , R_BRACKET , _________ , XXXXXXXXXX,                              XXXXXXXXXX, BACKTICK  , AMPERSAND , ASTERISK  ,    TILDE  , _________ ,     SAME  , \
       SAME  , _________ , LESS_THAN ,  L_PAREN  ,  R_PAREN  , MORE_THAN ,                                                         MINUS  ,   DOLLAR  ,  PERCENT  ,    CARET  , BACKSLASH ,     SAME  , \
       SAME  , _________ , _________ ,  L_CURLY  ,  R_CURLY  , _________ , XXXXXXXXXX,                              XXXXXXXXXX, UNDERSCORE,EXCLAMATION,  AT_SIGN  ,     HASH  ,     PIPE  ,     SAME  , \
   XXXXXXXXXX, XXXXXXXXXX,     SAME  , _________ , _________ ,                                                                              _________ , _________ ,    R_ALT  , XXXXXXXXXX, XXXXXXXXXX, \
                                                                               SAME  ,     SAME  ,          SAME  ,     SAME  ,                                                                         \
                                                                                       XXXXXXXXXX,      XXXXXXXXXX,                                                                                     \
                                                                   SAME  ,     SAME  , XXXXXXXXXX,      XXXXXXXXXX,     SAME  ,     SAME                                                                \
)

#define NAVIGATION_KEYS LAYOUT_ergodox_pretty(\
   XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX,                              XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, XXXXXXXXXX, \
       SAME  , _________ , _________ ,    PREV   ,     NEXT  ,   VOL_UP  , XXXXXXXXXX,                              XXXXXXXXXX, _________ ,    RESET  , _________ , _________ , _________ ,     SAME  , \
       SAME  , _________ , _________ ,    MUTE   , PLAY_PAUSE,  VOL_DOWN ,                                                       KC_LEFT  ,  KC_DOWN  ,    KC_UP  , KC_RIGHT  , LEFT_CLICK,     SAME  , \
       SAME  , _________ , _________ , _________ , _________ , _________ , XXXXXXXXXX,                              XXXXXXXXXX, MOUSE_LEFT, MOUSE_DOWN, MOUSE_UP  , MOUSE_RT  , RIGHT_CLK ,     SAME  , \
   XXXXXXXXXX, XXXXXXXXXX,     SAME  , _________ , _________ ,                                                                              _________ , _________ ,    R_ALT  , XXXXXXXXXX, XXXXXXXXXX, \
                                                                               SAME  ,     SAME  ,          SAME  ,     SAME  ,                                                                         \
                                                                                       XXXXXXXXXX,      XXXXXXXXXX,                                                                                     \
                                                                   SAME  ,     SAME  , XXXXXXXXXX,      XXXXXXXXXX,     SAME  ,     SAME                                                                \
)

enum custom_keycodes {
  NONE_RIGHT_NOW,
};

enum layers {
ALPHA,
NAVIGATION,
SYMBOLS,
NUMBERS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [ALPHA] = ALPHA_KEYS,
  [NUMBERS] = NUMBER_KEYS,
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
  }
  return KEY_NEEDS_HANDLING;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    switch (layer) {
      case ALPHA:
        light_color(YELLOW);
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
