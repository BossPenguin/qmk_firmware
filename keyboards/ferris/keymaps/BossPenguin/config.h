/*
Copyright 2020 Pierre Chevalier <pierrechevalier83@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
// Set the mouse settings to a comfortable speed/accuracy trade-off,
// assuming a screen refresh rate of 60 Htz or higher
// The default is 50. This makes the mouse ~3 times faster and more accurate
#define MOUSEKEY_INTERVAL 12
// Cursor Speed
// #define MOUSEKEY_MAX_SPEED 10
// The default is 20. Since we made the mouse about 3 times faster with the previous setting,
// give it more time to accelerate to max speed to retain precise control over short distances.
// #define MOUSEKEY_TIME_TO_MAX 100
// The default is 300. Let's try and make this as low as possible while keeping the cursor responsive
#define MOUSEKEY_DELAY 5
// It makes sense to use the same delay for the mouseweel
#define MOUSEKEY_WHEEL_DELAY 5
// The default is 100
#define MOUSEKEY_WHEEL_INTERVAL 80
// The default is 40
#define MOUSEKEY_WHEEL_TIME_TO_MAX 220

// Mouse mode
#define MK_KINETIC_SPEED
// Kinetic Mode Configuration
#define MOUSEKEY_MOVE_DELTA 2
#define MOUSEKEY_INITIAL_SPEED 1
#define MOUSEKEY_BASE_SPEED 40
// #define MOUSEKEY_DECELERATED_SPEED 100
// #define MOUSEKEY_ACCELERATED_SPEED 1000
#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 8
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS 16
// #define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 48
// #define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 8

// Tapping Toggle counts
#define TAPPING_TOGGLE 2

// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD

// Underglow configuration
#ifdef RGBLIGHT_ENABLE
  #define RGBLIGHT_ANIMATIONS
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
#endif

// Combo settings
#define COMBO_TERM 40
// #define COMBO_MUST_HOLD_MODS
// #define COMBO_HOLD_TERM 175

// Caps Word
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
