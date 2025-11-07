#pragma once

#include "gui/components/components.h"

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

typedef struct {
    const char* key;
    Color light;
    Color dark;
} ThemeColor;

Color lg_get_color(const char* name);
Color lg_get_color_theme(const char* name, THEME theme);

// Definitions
typedef struct RoundRectangle {
    float x;                // Rectangle top-left corner position x
    float y;                // Rectangle top-left corner position y
    float width;            // Rectangle width
    float height;           // Rectangle height
    float rounded;          // Rectangle roundness
} RoundRectangle;

typedef struct lg_text {
    const char* text;
    Color color;
    int fontSize;
} lg_text_t;

typedef struct lg_button {
    RoundRectangle rect;    // Rectangle information
    Color normal;           // Default color
    Color hover;            // Hovering color
    Color clicked;          // Clicking color
    Color disabled;         // Disabled color
    lg_text_t text;         // Button text
    bool enabled;           // Button enabled
} lg_button_t;

// Struct factories
lg_text_t lg_generate_text(const char* text, int fontSize);
lg_button_t lg_generate_button(RoundRectangle rect, lg_text_t text);

// Utils
void lg_rand_seed(void);
int lg_rand(int from, int to);
bool lg_rect_overlap(Rectangle a, Rectangle b);
bool lg_point_in_rect(Vector2 point, Rectangle rect);
Rectangle lg_round_to_rect(RoundRectangle rect);
RoundRectangle lg_rect_to_round(Rectangle rect);

// Individual UI elements
void lg_draw_text(const char* text, int posX, int posY, int fontSize, Color color);
void lg_draw_text_center(const char* text, Rectangle rect, int fontSize, Color color);
void lg_draw_text_center_offset(const char* text, Rectangle rect, Vector2 offset, int fontSize, Color color);

void lg_draw_rectangle_round(RoundRectangle rect, Color color);
void lg_draw_rectangle_round_outline(RoundRectangle rect, Color color);

// Complex UI elements
void lg_draw_button(lg_button_t button, bool blocked);