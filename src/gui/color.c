#include "../includes.h"

/// @brief Gets a colour from the current theme
/// @param name The name of the colour
/// @return The colour (Or #C824B1 (199, 36, 177) if it's not found)
Color lg_get_color(const char* name) {
    return lg_get_color_theme(name, lg_theme);
}

/// @brief Gets a colour from the current theme
/// @param name The name of the colour
/// @param theme The theme
/// @return The colour (Or #C824B1 (199, 36, 177) if it's not found)
Color lg_get_color_theme(const char* name, THEME theme) {
    for(size_t i = 0; i < sizeof(lg_theme_colors) / sizeof(ThemeColor); i++) {
        if(strcmp(name, lg_theme_colors[i].key) == 0)
        {
            if(theme == THEME_LIGHT) {
                return lg_theme_colors[i].light;
            } else {
                return lg_theme_colors[i].dark;
            }
        }
    }
    return (Color) { .r = 199, .g = 36, .b = 177, .a = 255 }; // Neon purple (#C724B1)
}