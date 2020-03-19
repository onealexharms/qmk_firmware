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

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  HSV_172_255_255,
  HSV_86_255_128,
  HSV_27_255_255,
};

enum layers {
  KEYB,
  NUM,
  PAREN,
  UTIL 
};

#define A_PAREN LT(PAREN, KC_A)
#define RECORD DYN_REC_START1
#define STOP DYN_REC_STOP
#define PLAY DYN_REC_PLAY
#define VOL_UP KC_AUDIO_VOL_UP
#define NEXT KC_MEDIA_NEXT_TRACK
#define VOL_DN KC_AUDIO_VOL_DOWN
#define PAUSE KC_AUDIO_PLAY_PAUSE
#define TAB_OR_CMD LGUI_T(KC_TAB)
#define BKSP_OR_CMD RGUI_T(KC_BSPACE)
#define SPACE KC_SPACE
#define KC_ESCAPE
#define TO_NUM // toggle NUM layer
#define TO_UTIL // toggle UTIL layer
#define HYPER KC_HYPER
#define ENTER KC_ENTER
#define SHIFT_TAB LSFT(KC_TAB)
#define L_SHIFT KC_LSFT
#define L_ALT KC_LALT
#define L_CTRL KC_LCTL
#define R_SHIFT KC_RSFT
#define R_ALT KC_RALT
#define R_CTRL KC_RCTL
#define SEMICOLON KC_SCOLON


//_______________|_______________|_______________|_______________|_______________|_______________|_______________|                                               |_______________|_______________|___________|_______________|_______________|_______________|_______________
// 
//_______________|_______________|_______________|_______________|_______________|_______________|_______________|                                               |_______________|_______________|___________|_______________|_______________|_______________|_______________
//
//_______________|_______________|_______________|_______________|_______________|_______________|               |                                               |               |_______________|___________|_______________|_______________|_______________|_______________
//
//_______________|_______________|_______________|_______________|_______________|_______________|_______________|                                               |_______________|_______________|___________|_______________|_______________|_______________|_______________
//
//_______________|_______________|_______________|_______________|_______________|_______________|               |                                               |               |_______________|___________|_______________|_______________|_______________|_______________
//                                                        
//_______________|_______________|_______________|_______________|_______________|               |_______________|                                               |_______________|               |___________|_______________|_______________|_______________|_______________
//
//
//                                                                                              |_______________|_______________|                |_______________|_______________|
//
//                                                                                                              |_______________|                |_______________|
//
//                                                                              |_______________|_______________|_______________|                |_______________|_______________|___________|


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [KEYB] = LAYOUT_ergodox_pretty(
//_______________|_______________|_______________|_______________|_______________|_______________|_______________|                                               |_______________|_______________|_______________|_______________|_______________|_______________|_______________
       _______,        _______,        _______,        _______,        _______,        _______,        _______,                                                      _______,        _______,       _______,         _______,        _______,        _______,       _______,
//_______________|_______________|_______________|_______________|_______________|_______________|_______________|                                               |_______________|_______________|_______________|_______________|_______________|_______________|_______________
       _______,          KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,         TO_NUM,                                                      TO_UTIL,            KC_Y,          KC_U,            KC_I,           KC_O,           KC_P,       _______,
//_______________|_______________|_______________|_______________|_______________|_______________|               |                                               |               |_______________|_______________|_______________|_______________|_______________|_______________
       L_CTRL,        A_PAREN,           KC_S,           KC_D,           KC_F,           KC_G,                                                                                          KC_H,          KC_J,            KC_K,           KC_L,       SEMICOLON,      KC_QUOTE,
//_______________|_______________|_______________|_______________|_______________|_______________|_______________|                                               |_______________|_______________|_______________|_______________|_______________|_______________|_______________
      L_SHIFT,           KC_Z,           KC_X,           KC_C,           KC_C,           KC_V,          HYPER,                                                         KC_B,            KC_N,          KC_M,        KC_COMMA,         KC_DOT,        KC_SLASH,       R_SHIFT,
//_______________|_______________|_______________|_______________|_______________|_______________|               |                                               |               |_______________|_______________|_______________|_______________|_______________|_______________
        L_ALT,         RECORD,           STOP,        KC_LEFT,       KC_RIGHT,                                                                                                                        KC_UP,         KC_DOWN,        _______,            PLAY,         R_ALT,
//_______________|_______________|_______________|_______________|_______________|               |_______________|                                               |_______________|               |_______________|_______________|_______________|_______________|_______________
//
                                                                                                    SHIFT_TAB,        _______,                       VOL_UP,            NEXT,    
//                                                                                               |_______________|_______________|               |_______________|_______________|
                                                                                                                      _______,                       VOL_DN,
//                                                                               |               |               |_______________|               |_______________|               |
                                                                                      ENTER,        TAB_OR_CMD,        ESCAPE,                        PAUSE,        BKSP_OR_TAB,      SPACE
//                                                                               |_______________|_______________|_______________|               |_______________|_______________|_______________|
  ),

  [NUM] = LAYOUT_ergodox_pretty(
    _______,   KC_F1,  KC_F2,    KC_F3,    KC_F4,    KC_F5,   _______,                       _______,   KC_F6,    KC_F7,    KC_F8,   KC_F9,    KC_F10,    KC_F11,
    _______, KC_EXLM,  KC_AT,  KC_LCBR,  KC_RCBR,  KC_PIPE,   _______,                       _______, _______,     KC_7,     KC_8,    KC_9,   KC_ASTR,    KC_F12,
    _______, KC_HASH, KC_DLR,  KC_LPRN,  KC_RPRN,  _______,                                           _______,     KC_4,     KC_5,    KC_6,   KC_PLUS,   _______,
    _______, KC_PERC, C_CIRC,  KC_LBRC,  KC_RBRC,  KC_TILD,   _______,                       _______, _______,     KC_1,     KC_2,    KC_3,   KC_BSLS,   _______,
    _______, _______, _______, _______,  _______,                                                               _______,   KC_DOT,    KC_0,  KC_EQUAL,   _______,
                                                        _______, _______,                 _______, _______,
                                                                 _______,                 _______,
                                               _______, _______, _______,                 _______, _______,  KC_0
  ),

  [PAREN] = LAYOUT_ergodox_pretty(
    _______, _______, _______, _______, _______, _______, _______,                                 _______, _______,   _______,   _______,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,                                 _______, _______,   KC_LPRN,   KC_RPRN,  KC_LBRC, KC_RBRC, _______,
    _______, _______, _______, _______, _______, _______,                                                   _______,   KC_LBRC,   KC_RBRC,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,                                 _______, _______,   KC_LCBR,   KC_RCBR,  _______, _______, _______,
    _______, _______, _______, _______, _______,                                                                       _______,   _______,  _______, _______, _______,
                                                     _______, _______,                       _______, _______,
                                                              _______,                       _______,
                                            _______, _______, _______,                       _______, _______, _______
  ),
  [UTIL] = LAYOUT_ergodox_pretty(
    _______, _______,    _______,     _______,     _______, _______, _______,                    _______, _______, _______, _______, _______, _______, RESET,
    _______, _______,    _______,    KC_MS_UP,     _______, _______, _______,                    _______, _______, _______, _______, _______, _______, _______,
    _______, _______, KC_MS_LEFT,  KC_MS_DOWN, KC_MS_RIGHT, _______,                                      _______, _______, _______, _______, _______, PAUSE,
    _______, _______,    _______,     _______,     _______, _______, _______,                    _______, _______, _______, KC_MEDIA_PREV_TRACK, NEXT,  _______, _______,
    _______, _______,    _______,  KC_MS_BTN1,  KC_MS_BTN2,                                                VOL_UP,  VOL_DN, KC_AUDIO_MUTE, _______, _______,
                                                     RGB_MOD, HSV_172_255_255,             _______, RGB_SLD,
                                                               HSV_86_255_128,             _______,
                                          RGB_VAD,  RGB_VAI,   HSV_27_255_255,             _______, RGB_HUD, KC_KP_0
  ),
};


rgblight_config_t rgblight_config;
bool disable_layer_color = 0;

bool suspended = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case TOGGLE_LAYER_COLOR:
      if (record->event.pressed) {
        disable_layer_color ^= 1;
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(172,255,255);
        #endif
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(86,255,128);
        #endif
      }
      return false;
    case HSV_27_255_255:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(27,255,255);
        #endif
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(172,255,255);
        #endif
        break;
      case 2:
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(86,255,128);
        #endif
        break;
      case 3:
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_ENABLE
          rgblight_enable();
          rgblight_mode(1);
          rgblight_sethsv(27,255,255);
        #endif
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    switch (layer) {
      case 0:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(25,255,255);
        }
        break;
      case 1:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(71,208,182);
        }
        break;
      case 2:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(151,237,242);
        }
        break;
      case 3:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(195,183,222);
        }
        break;
      default:
        if(!disable_layer_color) {
          rgblight_config.raw = eeconfig_read_rgblight();
          if(rgblight_config.enable == true) {
            rgblight_enable();
            rgblight_mode(rgblight_config.mode);
            rgblight_sethsv(rgblight_config.hue, rgblight_config.sat, rgblight_config.val);
          }
          else {
            rgblight_disable();
          }
        }
        break;
    }
    return state;

};

void keyboard_post_init_user(void) {
  layer_state_set_user(layer_state);
}
