#include QMK_KEYBOARD_H


#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
//extern rgblight_config_t rgblight_config;
#endif

extern uint8_t is_master;

// utility things
#define _________ KC_NO // unused, available keys

// media control keys
#define VOL_UP KC_AUDIO_VOL_UP
#define NEXT KC_MEDIA_FAST_FORWARD
#define PREV KC_MEDIA_REWIND
#define VOL_DOWN KC_AUDIO_VOL_DOWN
#define MUTE KC_AUDIO_MUTE
#define PLAY_PAUSE KC_MEDIA_PLAY_PAUSE

// mouse keys
#define RIGHT_CLICK  KC_MS_BTN2
#define LEFT_CLICK KC_MS_BTN1
#define MOUSE_LEFT KC_MS_LEFT
#define MOUSE_RT KC_MS_RIGHT
#define MOUSE_UP KC_MS_UP
#define MOUSE_DOWN KC_MS_DOWN
#define WHEEL_UP KC_MS_WH_UP
#define WHEEL_DOWN KC_MS_WH_DOWN

// modifiers and command keys
#define L_CMD KC_LGUI
#define R_CMD KC_RGUI
#define BKSP_ALT MT(MOD_RALT, KC_BSPACE)
#define ESC_ALT MT(MOD_LALT, KC_ESC)
#define L_SHIFT KC_LSFT
#define TAB_CTRL MT(MOD_LCTL, KC_TAB)
#define R_SHIFT KC_RSFT
#define CTRL_QUOT MT(MOD_RCTL, KC_QUOTE)
#define CAPSLOCK KC_CAPSLOCK

// layer-switching keys
#define D_NAV LT(NAVIGATION, KC_D)
#define F_SYMBOLS LT(SYMBOLS, KC_F)
#define S_NUMBERS LT(NUMBERS, KC_S)
#define L_NUMBERS LT(NUMBERS, KC_L)
#define J_SYMBOLS LT(SYMBOLS, KC_J)
#define K_NAV LT(NAVIGATION, KC_K)

// numbers layer symbols
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
#define ZERO KC_0

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
#define SEMICOLON KC_SCOLON
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

enum layers {
  ALPHA,
  NUMBERS,
  SYMBOLS,
  NAVIGATION,
  LAYER_COUNT
};

#define ALPHA_KEYS LAYOUT( \
    CAPSLOCK  ,     KC_Q  ,     KC_W  ,     KC_E  ,     KC_R  ,     KC_T  ,                  KC_Y     ,     KC_U  ,     KC_I  ,     KC_O  ,     KC_P  ,TO(NUMBERS), \
    TAB_CTRL  ,     KC_A  ,S_NUMBERS  ,    D_NAV  , F_SYMBOLS ,     KC_G  ,                  KC_H     , J_SYMBOLS ,    K_NAV  , L_NUMBERS , SEMICOLON ,  CTRL_QUOT, \
    L_SHIFT   ,     KC_Z  ,     KC_X  ,     KC_C  ,     KC_V  ,     KC_B  ,                  KC_N     ,     KC_M  , KC_COMMA  ,   PERIOD  , KC_SLASH  ,  R_SHIFT  , \
                                               L_CMD     ,   ENTER   ,     ESC_ALT,  BKSP_ALT  ,  SPACE  ,  R_CMD                                                  \
)

#define NUMBER_KEYS LAYOUT( \
      _________ , _________ , _________ , _________ , _________ , _________ ,                   EQUAL   ,  KC_7     ,  KC_8     ,  KC_9     , _________ , TO(ALPHA) ,\
      TAB_CTRL  , _________ , _________ , _________ , _________ , _________ ,                   MINUS   ,  KC_4     ,  KC_5     ,  KC_6     , _________ , _________ ,\
      _________ , _________ , _________ , _________ , _________ , _________ ,                   PLUS    ,  KC_1     ,  KC_2     ,  KC_3     ,  DECIMAL  , _________ ,\
                                                 L_CMD     ,   ENTER   ,     ESC_ALT,  BKSP_ALT  ,  SPACE  ,  ZERO                                                  \
  )

#define SYMBOL_KEYS LAYOUT( \
      _________ , _________ , _________ , L_BRACKET , R_BRACKET , _________ ,                  BACKTICK , AMPERSAND ,  ASTERISK ,  TILDE    , _________ , _________ ,\
      TAB_CTRL  , _________ , LESS_THAN ,  L_PAREN  ,  R_PAREN  , MORE_THAN ,                   MINUS   ,  DOLLAR   ,  PERCENT  ,  CARET    ,  PIPE     , _________ ,\
      _________ , _________ , _________ ,  L_CURLY  ,  R_CURLY  , _________ ,                 UNDERSCORE,EXCLAMATION,  AT_SIGN  ,  HASH     , BACKSLASH , _________ ,\
                                                 L_CMD     ,   ENTER   ,     ESC_ALT,  BKSP_ALT  ,  SPACE  ,  R_CMD                                                  \
  )

#define NAVIGATION_KEYS LAYOUT( \
      _________ , _________ ,  PREV     ,  NEXT     ,  VOL_UP   , _________ ,                 _________ ,  RESET    , _________ , _________ , _________ , _________ ,\
      TAB_CTRL  , _________ ,  MUTE     , PLAY_PAUSE,  VOL_DOWN , _________ ,                 KC_LEFT   ,  KC_DOWN  ,  KC_UP    ,  KC_RIGHT ,  WHEEL_UP , _________ ,\
      _________ , _________ , _________ , LEFT_CLICK,RIGHT_CLICK, _________ ,                MOUSE_LEFT , MOUSE_DOWN,  MOUSE_UP ,  MOUSE_RT ,WHEEL_DOWN , _________ ,\
                                                 L_CMD     ,   ENTER   ,     ESC_ALT,  BKSP_ALT  ,  SPACE  ,  R_CMD                                                  \
  )

const uint16_t PROGMEM keymaps[LAYER_COUNT][MATRIX_ROWS][MATRIX_COLS] = {
  [ALPHA] = ALPHA_KEYS,
  [NUMBERS] = NUMBER_KEYS, 
  [SYMBOLS] = SYMBOL_KEYS, 
  [NAVIGATION] = NAVIGATION_KEYS, 
};

int RGB_current_mode;

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

// Setting ADJUST layer RGB back to default
void update_tri_layer_RGB(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
  if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
    layer_on(layer3);
  } else {
    layer_off(layer3);
  }
}

void matrix_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
      RGB_current_mode = rgblight_config.mode;
    #endif
    //SSD1306 OLED init, make sure to add #define SSD1306OLED in config.h
    #ifdef SSD1306OLED
        iota_gfx_init(!has_usb());   // turns on the display
    #endif
}

//SSD1306 OLED update loop, make sure to add #define SSD1306OLED in config.h
#ifdef SSD1306OLED

// When add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void matrix_scan_user(void) {
   iota_gfx_task();
}

void matrix_render_user(struct CharacterMatrix *matrix) {
  if (is_master) {
    // If you want to change the display of OLED, you need to change here
    matrix_write_ln(matrix, read_layer_state());
    matrix_write_ln(matrix, read_keylog());
    //matrix_write_ln(matrix, read_keylogs());
    //matrix_write_ln(matrix, read_mode_icon(keymap_config.swap_lalt_lgui));
    //matrix_write_ln(matrix, read_host_led_state());
    //matrix_write_ln(matrix, read_timelog());
  } else {
    matrix_write(matrix, read_logo());
  }
}

void matrix_update(struct CharacterMatrix *dest, const struct CharacterMatrix *source) {
  if (memcmp(dest->display, source->display, sizeof(dest->display))) {
    memcpy(dest->display, source->display, sizeof(dest->display));
    dest->dirty = true;
  }
}

void iota_gfx_task_user(void) {
  struct CharacterMatrix matrix;
  matrix_clear(&matrix);
  matrix_render_user(&matrix);
  matrix_update(&display, &matrix);
}
#endif//SSD1306OLED

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef SSD1306OLED
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }


/*  switch (keycode) {
    case QWERTY:
     if (record->event.pressed) {
        persistent_default_layer_set(1UL<<_QWERTY);
      }
      return false;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      }
      return false;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      }
      return false;
    case ADJUST:
        if (record->event.pressed) {
          layer_on(_ADJUST);
        } else {
          layer_off(_ADJUST);
        }
        return false;
    case RGB_MOD:
      #ifdef RGBLIGHT_ENABLE
        if (record->event.pressed) {
          rgblight_mode(RGB_current_mode);
          rgblight_step();
          RGB_current_mode = rgblight_config.mode;
        }
      #endif
      return false;
    case RGBRST:
      #ifdef RGBLIGHT_ENABLE
        if (record->event.pressed) {
          eeconfig_update_rgblight_default();
          rgblight_enable();
          RGB_current_mode = rgblight_config.mode;
        }
      #endif
      break;
  }
*/  
  return true;
}
