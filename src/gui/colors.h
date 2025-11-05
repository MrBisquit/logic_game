#pragma once

#include "../includes.h"

#define COLORS_BACKGROUND_LIGHT { .r = 227, .g = 227, .b = 227, .a = 255 }
#define COLORS_BACKGROUND_DARK  { .r = 23,  .g = 23,  .b = 23,  .a = 255 }

static const ThemeColor lg_theme_colors[1] = {
    {
        "BACKGROUND",
        { .r = 227, .g = 227, .b = 227, .a = 255 }, // #CCCCCC (0xCCCCCC)
        { .r = 23,  .g = 23,  .b = 23,  .a = 255 }  // #171717 (0x171717)
    }
};