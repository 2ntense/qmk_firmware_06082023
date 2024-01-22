// Copyright 2023 linlin012 (@linlin012)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RGB_MATRIX_LED_COUNT 64
#define CAPS_LOCK_INDEX 28
#define LGUI_INDEX 54
#define ESCAPE_INDEX 0
#define SDB A4

#define RGB_MATRIX_SLEEP
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS

#define g_suspend_state rgb_matrix_get_suspend_state()
