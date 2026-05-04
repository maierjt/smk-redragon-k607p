#include "kbdef.h"
#include "layout.h"
#include "user_layout.h"
#include "report.h"
#include <stdint.h>

// clang-format off

#define LAYOUT_87( \
                   K00_0,        K02_0, K03_0, K04_0, K05_0, K06_0, K07_0, K08_0, K09_0, K10_0, K11_0, K12_0, K13_0, K14_0, K15_0, K16_0, \
                   K00_1, K01_1, K02_1, K03_1, K04_1, K05_1, K06_1, K07_1, K08_1, K09_1, K10_1, K11_1, K12_1, K13_1, K14_1, K15_1, K16_1, \
                   K00_2, K01_2, K02_2, K03_2, K04_2, K05_2, K06_2, K07_2, K08_2, K09_2, K10_2, K11_2, K12_2, K13_2, K14_2, K15_2, K16_2, \
                   K00_3, K01_3, K02_3, K03_3, K04_3, K05_3, K06_3, K07_3, K08_3, K09_3, K10_3, K11_3,        K13_3,                      \
                   K00_4, K01_4, K02_4, K03_4, K04_4, K05_4, K06_4, K07_4, K08_4, K09_4, K10_4,               K13_4,        K15_4,        \
                   K00_5, K01_5, K02_5,               K05_5,               K08_5, K09_5, K10_5,               K13_5, K14_5, K15_5, K16_5 \
                 ) { \
    { K00_0, KC_NO, K02_0, K03_0, K04_0, K05_0, K06_0, K07_0, K08_0, K09_0, K10_0, K11_0, K12_0, K13_0, K14_0, K15_0, K16_0 }, \
    { K00_1, K01_1, K02_1, K03_1, K04_1, K05_1, K06_1, K07_1, K08_1, K09_1, K10_1, K11_1, K12_1, K13_1, K14_1, K15_1, K16_1 }, \
    { K00_2, K01_2, K02_2, K03_2, K04_2, K05_2, K06_2, K07_2, K08_2, K09_2, K10_2, K11_2, K12_2, K13_2, K14_2, K15_2, K16_2 }, \
    { K00_3, K01_3, K02_3, K03_3, K04_3, K05_3, K06_3, K07_3, K08_3, K09_3, K10_3, K11_3, KC_NO, K13_3, KC_NO, KC_NO, KC_NO }, \
    { K00_4, K01_4, K02_4, K03_4, K04_4, K05_4, K06_4, K07_4, K08_4, K09_4, K10_4, KC_NO, KC_NO, K13_4, KC_NO, K15_4, KC_NO }, \
    { K00_5, K01_5, K02_5, KC_NO, KC_NO, K05_5, KC_NO, KC_NO, K08_5, K09_5, K10_5, KC_NO, KC_NO, K13_5, K14_5, K15_5, K16_5 } \
}

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _WIN_BL 0
#define _WIN_FL 1

enum custom_keycodes {
    SFT_ESC = KB_SAFE_RANGE,
};

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap _WIN_BL: (Base Layer) Default Layer
     * ,-------------------------------------------------------------------------------------------.
     * |Esc|  |F1| F2| F3| F4|  |F5| F6| F7| F8|  |F9| F10| F11| F12|        |PrtScr| ScrLck| Pause|
     * |-------------------------------------------------------------------------------------------|
     * |`  |  1|   2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  +| Bckspc|        |   Ins|  Home |  Pgup|  
     * |-------------------------------------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|     \|        |   Del|  End  |  PgDn|       
     * |-------------------------------------------------------------------------------------------|
     * |CAPS   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  Return|                              |
     * |-------------------------------------------------------------------------------------------|
     * |Shift    |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|     Shift|               |  Up   |      |
     * |-------------------------------------------------------------------------------------------|
     * |Ctrl|Gui |Alt |          Space          |Alt| Fn | Gui| Ctrl|        |  Left| Down  | Right|
     * `-------------------------------------------------------------------------------------------'
     */

    [_WIN_BL] = LAYOUT_87(
        SFT_ESC, KC_F1,   KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SCRL, KC_PAUS,
        KC_GRV,  KC_1,    KC_2,    KC_3,   KC_4,    KC_5,    KC_6,    KC_7,     KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS, KC_HOME, KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,    KC_Y,    KC_U,     KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DELETE, KC_END, KC_PGDN,
        KC_CAPS, KC_A,    KC_S,    KC_D,   KC_F,    KC_G,    KC_H,    KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,    KC_N,    KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP, 
        KC_LCTL, KC_LGUI, KC_LALT,                           KC_SPC,                     KC_RALT, MO(_WIN_FL), KC_LGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
/* Keymap _WIN_FL: (Function Layer) TODO: Update key, RGB and BL codes not working
     * ,-------------------------------------------------------------------------------------------.
     * |Esc|  |F1| F2| F3| F4|  |F5| F6| F7| F8|  |F9| F10| F11| F12|        |PrtScr| ScrLck| Pause|
     * |-------------------------------------------------------------------------------------------|
     * |`  |  1|   2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  +| Bckspc|        |RGB MODE| Home | Pgup|  
     * |-------------------------------------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|     \|        | HUE UP|  End  | PgDn|       
     * |-------------------------------------------------------------------------------------------|
     * |CAPS   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  Return|                              |
     * |-------------------------------------------------------------------------------------------|
     * |Shift    |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|     Shift|               |  VAU |       |
     * |-------------------------------------------------------------------------------------------|
     * |Ctrl|Gui |Alt |          Space          |Alt| Fn | Gui| Ctrl|        |  SPD |  VAD | SPI   |
     * `-------------------------------------------------------------------------------------------'
*/
  
[_WIN_FL] = LAYOUT_87(
        _______, KC_MYCM, KC_HOME, KC_CALC, KC_MSEL, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, KC_MUTE, KC_VOLD, KC_VOLU, KC_MAIL, BL_TOGG, _______, _______,
        _______, LNK_BT1, LNK_BT2, LNK_BT3, LNK_24G, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_MOD, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_HUI, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_VAI,
        _______, _______, _______, _______, _______, _______, _______, _______, RGB_SPD, RGB_VAD, RGB_SPI 
    ),

};

// clang-format on

bool layout_process_record(uint16_t keycode, bool key_pressed)
{
    switch (keycode) {
        case SFT_ESC:
            if (key_pressed) {
                if (get_mods() & MODS_SHIFT_MASK) {
                    add_key(KC_GRV);
                    send_keyboard_report();
                } else {
                    add_key(KC_ESC);
                    send_keyboard_report();
                }
            } else {
                if (get_mods() & MODS_SHIFT_MASK) {
                    del_key(KC_GRV);
                    send_keyboard_report();
                } else {
                    del_key(KC_ESC);
                    send_keyboard_report();
                }
            }

            return false;

        default:
            return true;
    }
}
