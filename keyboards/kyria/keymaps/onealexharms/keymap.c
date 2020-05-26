#include QMK_KEYBOARD_H

// utility things
#define _________ KC_NO
#define ____ KC_NO

// media control keys
#define VOL_UP KC_AUDIO_VOL_UP
#define NEXT KC_MEDIA_FAST_FORWARD
#define PREV KC_MEDIA_REWIND
#define VOL_DN KC_AUDIO_VOL_DOWN
#define MUTE KC_AUDIO_MUTE
#define PLAY_PAUSE KC_MEDIA_PLAY_PAUSE

// modifiers and command keys
#define LEFT_ALT KC_LALT
#define L_CMD_ESC MT(MOD_LGUI, KC_ESC)
#define ENTER KC_ENTER
#define TAB KC_TAB
#define BACKSPACE KC_BSPACE
#define SPACE KC_SPACE
#define R_CMD_ESC MT(MOD_RGUI, KC_ESC)
#define RIGHT_ALT KC_RALT
#define L_CTRL KC_LCTL
#define L_SHIFT KC_LSFT
#define CAPSLOCK KC_CAPSLOCK
#define R_CTRL KC_RCTL
#define SHIFT_QUOT MT(MOD_RSFT, KC_QUOT)
#define NUMLOCK TG(NUMBERS)

// layer-switching alpha keys
#define S_NUMBERS LT(NUMBERS, KC_S)
#define D_NAV LT(NAVIGATION, KC_D)
#define F_SYMBOLS LT(SYMBOLS, KC_F)
#define J_SYMBOLS LT(SYMBOLS, KC_J)
#define K_NAV LT(NAVIGATION, KC_K)
#define L_NUMBERS LT(NUMBERS, KC_L)

// numbers layer symbols
#define PLUS KC_PLUS
#define MINUS KC_MINUS
#define DIVIDE KC_SLASH
#define MULTIPLY KC_ASTERISK
#define EQUAL KC_EQUAL
#define DECIMAL KC_DOT
#define ZERO KC_0

// alpha layer
#define PERIOD KC_DOT
#define LESS_THAN KC_LEFT_ANGLE_BRACKET
#define MORE_THAN  KC_RIGHT_ANGLE_BRACKET

// parens layer 
#define L_PAREN KC_LEFT_PAREN
#define R_PAREN KC_RIGHT_PAREN
#define L_BRACKET KC_LBRC
#define R_BRACKET KC_RBRC
#define L_CURLY KC_LCBR
#define R_CURLY KC_RCBR

// symbols layer
#define AMPERSAND KC_AMPERSAND
#define ASTERISK KC_ASTERISK
#define AT_SIGN KC_AT
#define BACKSLASH KC_BSLS
#define BACKTICK KC_GRAVE
#define CARET KC_CIRCUMFLEX
#define SEMICOLON KC_SCOLON
#define DOLLAR KC_DOLLAR
#define BANG KC_EXCLAIM
#define HASH KC_HASH
#define PERCENT KC_PERCENT
#define PIPE KC_PIPE
#define TILDE KC_TILDE
#define UNDERLINE KC_UNDERSCORE

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
  _________ ,     KC_Q  ,     KC_W  ,     KC_E  ,     KC_R  ,     KC_T  ,                                      KC_Y    ,     KC_U  ,     KC_I  ,     KC_O  ,     KC_P  , _________ ,\
  L_SHIFT   ,     KC_A  ,S_NUMBERS  ,    D_NAV  , F_SYMBOLS ,     KC_G  ,                                      KC_H    , J_SYMBOLS ,    K_NAV  , L_NUMBERS , SEMICOLON , SHIFT_QUOT,\
  L_CTRL    ,     KC_Z  ,     KC_X  ,     KC_C  ,     KC_V  ,     KC_B  , PLAY_PAUSE, NEXT,   VOL_UP , VOL_DN, KC_N    ,     KC_M  , KC_COMMA  ,   PERIOD  , KC_SLASH  ,  R_CTRL   ,\
                               CAPSLOCK ,  LEFT_ALT , L_CMD_ESC,       ENTER  , TAB  ,       BACKSPACE,   SPACE,  R_CMD_ESC,  RIGHT_ALT   ,  NUMLOCK                                \
  )

#define NUMBER_KEYS LAYOUT(\
  _________ , _________ , _________ , _________ , _________ , _________ ,                                      EQUAL   ,  KC_7     ,  KC_8     ,  KC_9     , _________ , _________ ,\
  L_SHIFT   , _________ , _________ , _________ , _________ , _________ ,                                      MINUS   ,  KC_4     ,  KC_5     ,  KC_6     , _________ , SHIFT_QUOT,\
  L_CTRL    , _________ , _________ , _________ , _________ , _________ , ____ , ____ ,         ____ ,  ____ , PLUS    ,  KC_1     ,  KC_2     ,  KC_3     ,  DECIMAL  ,  R_CTRL   ,\
                              CAPSLOCK ,  LEFT_ALT , L_CMD_ESC,       ENTER  , TAB  ,        BACKSPACE,   SPACE,     ZERO  ,  RIGHT_ALT   ,  NUMLOCK                                \
  )

#define SYMBOL_KEYS LAYOUT( \
  _________ , _________ , _________ , L_BRACKET , R_BRACKET , _________ ,                                      BACKTICK, AMPERSAND ,  ASTERISK ,  TILDE    , _________ , _________ ,\
  L_SHIFT   , _________ , LESS_THAN ,  L_PAREN  ,  R_PAREN  , MORE_THAN ,                                      MINUS   ,  DOLLAR   ,  PERCENT  ,  CARET    ,  PIPE     , SHIFT_QUOT,\
  L_CTRL    , _________ , _________ ,  L_CURLY  ,  R_CURLY  , _________ , ____ , ____ ,         ____ ,  ____ ,UNDERLINE,  BANG     ,  AT_SIGN  ,  HASH     , BACKSLASH ,  R_CTRL   ,\
                               CAPSLOCK ,  LEFT_ALT , L_CMD_ESC,       ENTER  , TAB  ,       BACKSPACE,   SPACE,  R_CMD_ESC,  RIGHT_ALT   ,  NUMLOCK                                \
  )

#define NAVIGATION_KEYS LAYOUT( \
  _________ , _________ ,  PREV     ,  NEXT     ,  VOL_UP   , _________ ,                                     _________ ,  RESET    , _________ , _________ , _________ , _________ ,\
  L_SHIFT   , _________ ,  MUTE     , PLAY_PAUSE,  VOL_DN   , _________ ,                                     KC_LEFT   ,  KC_DOWN  ,  KC_UP    ,  KC_RIGHT , _________ , SHIFT_QUOT,\
  L_CTRL    , _________ , _________ , _________ , _________ , _________ , ____ , ____ ,         ____ ,  ____ ,_________ , _________ , _________ , _________ , _________ ,  R_CTRL   ,\
                               CAPSLOCK ,  LEFT_ALT , L_CMD_ESC,       ENTER  , TAB  ,       BACKSPACE,   SPACE,  R_CMD_ESC,  RIGHT_ALT   ,  NUMLOCK                                 \
  ) 

const uint16_t PROGMEM keymaps[LAYER_COUNT][MATRIX_ROWS][MATRIX_COLS] = {
  [ALPHA] = ALPHA_KEYS,
  [NUMBERS] = NUMBER_KEYS, 
  [SYMBOLS] = SYMBOL_KEYS, 
  [NAVIGATION] = NAVIGATION_KEYS, 
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    }
    return true;
}

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	return OLED_ROTATION_180;
}

static void render_kyria_logo(void) {
    static const char PROGMEM kyria_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,192,224,240,112,120, 56, 60, 28, 30, 14, 14, 14,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 14, 14, 14, 30, 28, 60, 56,120,112,240,224,192,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,192,224,240,124, 62, 31, 15,  7,  3,  1,128,192,224,240,120, 56, 60, 28, 30, 14, 14,  7,  7,135,231,127, 31,255,255, 31,127,231,135,  7,  7, 14, 14, 30, 28, 60, 56,120,240,224,192,128,  1,  3,  7, 15, 31, 62,124,240,224,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,240,252,255, 31,  7,  1,  0,  0,192,240,252,254,255,247,243,177,176, 48, 48, 48, 48, 48, 48, 48,120,254,135,  1,  0,  0,255,255,  0,  0,  1,135,254,120, 48, 48, 48, 48, 48, 48, 48,176,177,243,247,255,254,252,240,192,  0,  0,  1,  7, 31,255,252,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,255,255,255,  0,  0,  0,  0,  0,254,255,255,  1,  1,  7, 30,120,225,129,131,131,134,134,140,140,152,152,177,183,254,248,224,255,255,224,248,254,183,177,152,152,140,140,134,134,131,131,129,225,120, 30,  7,  1,  1,255,255,254,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0,255,255,  0,  0,192,192, 48, 48,  0,  0,240,240,  0,  0,  0,  0,  0,  0,240,240,  0,  0,240,240,192,192, 48, 48, 48, 48,192,192,  0,  0, 48, 48,243,243,  0,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48,192,192,  0,  0,  0,  0,  0,
        0,  0,  0,255,255,255,  0,  0,  0,  0,  0,127,255,255,128,128,224,120, 30,135,129,193,193, 97, 97, 49, 49, 25, 25,141,237,127, 31,  7,255,255,  7, 31,127,237,141, 25, 25, 49, 49, 97, 97,193,193,129,135, 30,120,224,128,128,255,255,127,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0, 63, 63,  3,  3, 12, 12, 48, 48,  0,  0,  0,  0, 51, 51, 51, 51, 51, 51, 15, 15,  0,  0, 63, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48, 63, 63, 48, 48,  0,  0, 12, 12, 51, 51, 51, 51, 51, 51, 63, 63,  0,  0,  0,  0,  0,
        0,  0,  0,  0, 15, 63,255,248,224,128,  0,  0,  3, 15, 63,127,255,239,207,141, 13, 12, 12, 12, 12, 12, 12, 12, 30,127,225,128,  0,  0,255,255,  0,  0,128,225,127, 30, 12, 12, 12, 12, 12, 12, 12, 13,141,207,239,255,127, 63, 15,  3,  0,  0,128,224,248,255, 63, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  3,  7, 15, 62,124,248,240,224,192,128,  1,  3,  7, 15, 30, 28, 60, 56,120,112,112,224,224,225,231,254,248,255,255,248,254,231,225,224,224,112,112,120, 56, 60, 28, 30, 15,  7,  3,  1,128,192,224,240,248,124, 62, 15,  7,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  3,  7, 15, 14, 30, 28, 60, 56,120,112,112,112,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,112,112,112,120, 56, 60, 28, 30, 14, 15,  7,  3,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    };
    oled_write_raw_P(kyria_logo, sizeof(kyria_logo));
}

static void render_qmk_logo(void) {
  static const char PROGMEM qmk_logo[] = {
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};

  oled_write_P(qmk_logo, false);
}

static void render_status(void) {
    // QMK Logo and version information
    render_qmk_logo();
    oled_write_P(PSTR("       Kyria rev1.0\n\n"), false);

    // Host Keyboard Layer Status
    // oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case ALPHA:
            oled_write_P(PSTR("ALPHA\n"), false);
            break;
        case NUMBERS:
            oled_write_P(PSTR("NUMBERS\n"), false);
            break;
        case SYMBOLS:
            oled_write_P(PSTR("SYMBOLS\n"), false);
            break;
        case NAVIGATION:
            oled_write_P(PSTR("NAVIGATION\n"), false);
            break;
        default:
            oled_write_P(PSTR("Undefined\n"), false);
    }

    // Host Keyboard LED Status
    uint8_t led_usb_state = host_keyboard_leds();
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_CAPS_LOCK)   ? PSTR("CAPLOCK") : PSTR("       "), false);
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status(); // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        render_kyria_logo();
    }
}
#endif
