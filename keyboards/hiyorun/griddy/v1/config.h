// Copyright 2023 Lundy Rasuli (@hiyorun)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT
#define SOFT_SERIAL_PIN D0
#define SPLIT_HAND_PIN D2
#define SPLIT_HAND_PIN_LOW_IS_LEFT