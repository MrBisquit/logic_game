#include "../includes.h"

/// @brief Gets a colour from the current theme
/// @param name 
/// @return 
Color lg_get_color(const char* name) {
    return lg_get_color_theme(name, lg_theme);
}

Color lg_get_color_theme(const char* name, THEME theme) {
    for(size_t i = 0; i < sizeof(lg_theme_colors) / sizeof(ThemeColor); i++) {
        if(strcmp(name, lg_theme_colors[i].key) == 0)
            return theme == THEME_LIGHT ? lg_theme_colors[i].light : lg_theme_colors[i].dark;
    }
    return (Color) { .r = 199, .g = 36, .b = 177, .a = 255 }; // Neon purple (#C724B1)
}