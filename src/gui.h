#pragma once

// This may seem really dumb, but there will be another layer on top of RayLib

typedef enum {
    THEME_LIGHT,
    THEME_DARK
} THEME;

static THEME lg_theme = THEME_DARK;

typedef struct {
    const char* key;
    Color light;
    Color dark;
} ThemeColor;

Color lg_get_color(const char* name);
Color lg_get_color_theme(const char* name, THEME theme);