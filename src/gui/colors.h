#pragma once

#include "../includes.h"

#define COLORS_BACKGROUND_LIGHT { .r = 227, .g = 227, .b = 227, .a = 255 }
#define COLORS_BACKGROUND_DARK  { .r = 23,  .g = 23,  .b = 23,  .a = 255 }

static const ThemeColor lg_theme_colors[8] = {
    {
        "BACKGROUND",
        { .r = 227, .g = 227, .b = 227, .a = 255 }, // #E3E3E3 (0xE3E3E3)
        { .r = 23,  .g = 23,  .b = 23,  .a = 255 }  // #171717 (0x171717)
    },
    {
        "TEXT",
        { .r = 27,  .g = 27,  .b = 27,  .a = 255 }, // #1B1B1B (0x1B1B1B)
        { .r = 255, .g = 255, .b = 255, .a = 255 }  // #FFFFFF (0xFFFFFF)
    },
    {
        "OVERLAY",
        { .r =   0, .g =   0, .b =   0, .a = 128 }, // #000000 (0x000000)
        { .r =   0, .g =   0, .b =   0, .a = 200 }, // #000000 (0x000000)
    },

    // Button
    {
        "BUTTON",
        { .r = 180, .g = 180, .b = 180, .a = 128 },  // #B4B4B4 (0xB4B4B4)
        { .r = 80,  .g = 80,  .b = 80,  .a = 128 }   // #505050 (0x505050)
    },
    {
        "BUTTON_HOVER",
        { .r = 180, .g = 180, .b = 180, .a = 200 },  // #B4B4B4 (0xB4B4B4)
        { .r = 80,  .g = 80,  .b = 80,  .a = 200 }   // #505050 (0x505050)
    },
    {
        "BUTTON_CLICKED",
        { .r = 180, .g = 180, .b = 180, .a = 240 },  // #B4B4B4 (0xB4B4B4)
        { .r = 80,  .g = 80,  .b = 80,  .a = 240 }   // #505050 (0x505050)
    },
    {
        "BUTTON_DISABLED",
        { .r = 180, .g = 180, .b = 180, .a = 80 },  // #B4B4B4 (0xB4B4B4)
        { .r = 80,  .g = 80,  .b = 80,  .a = 80 }   // #505050 (0x505050)
    },

    // Popups
    {
        "POPUP_BACKGROUND",
        { .r = 227, .g = 227, .b = 227, .a = 255 }, // #E3E3E3 (0xE3E3E3)
        { .r = 50,  .g = 50,  .b = 50,  .a = 255 }, // #323232 (0x323232)
    }
};