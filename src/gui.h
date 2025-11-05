#pragma once

// This may seem really dumb, but there will be another layer on top of RayLib
//
// This is a good thing, especially for things such as text, as it allows me
// to add things like centering on a `Rectangle`.
//
// This is a different system to the actual logic components, these are
// always-on-top elements.

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

// Utils
void lg_rand_seed(void);
int lg_rand(int from, int to);
bool lg_rect_overlap(Rectangle a, Rectangle b);
bool lg_point_in_rect(Vector2 point, Rectangle rect);

// Individual UI elements
void lg_draw_text(const char* text, int posX, int posY, int fontSize, Color color);
void lg_draw_text_center(const char* text, Rectangle rect, int fontSize, Color color);
void lg_draw_text_center_offset(const char* text, Rectangle rect, Vector2 offset, int fontSize, Color color);