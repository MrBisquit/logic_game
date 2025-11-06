#include "../includes.h"

/// @brief Draws text
/// @param text The text to draw
/// @param posX The X position
/// @param posY The Y position
/// @param fontSize The font size
/// @param color The color of the text to draw
void lg_draw_text(const char* text, int posX, int posY, int fontSize, Color color) {
    // This seems pointless now, but I plan on adding a different font later
    DrawText(text, posX, posY, fontSize, color);
}

/// @brief Draws text at the center of a rectangle
/// @param text The text to draw
/// @param rect The rectangle to draw the text in
/// @param fontSize The font size
/// @param color The color of the text to draw
void lg_draw_text_center(const char* text, Rectangle rect, int fontSize, Color color) {
    int width = MeasureText(text, fontSize);
    int height = fontSize / 2;

    int x = (rect.x + (rect.width / 2)) - (width / 2);
    int y = (rect.y + (rect.height / 2)) - height;

    lg_draw_text(text, x, y, fontSize, color);
}

/// @brief Draws text at the center of a rectangle with an offset
/// @param text The text to draw
/// @param rect The rectangle to draw the text in
/// @param offset The offset
/// @param fontSize The font size
/// @param color The color of the text to draw
void lg_draw_text_center_offset(const char* text, Rectangle rect, Vector2 offset, int fontSize, Color color) {
    int width = MeasureText(text, fontSize);
    int height = fontSize / 2;

    int x = (rect.x + (rect.width / 2)) - (width / 2) + offset.x;
    int y = (rect.y + (rect.height / 2)) - height + offset.y;

    lg_draw_text(text, x, y, fontSize, color);
}

void lg_draw_rectangle_round(RoundRectangle rect, Color color) {
    DrawRectangleRounded(lg_round_to_rect(rect), rect.rounded, 4 + (4 * rect.rounded), color);
}

void lg_draw_rectangle_round_outline(RoundRectangle rect, Color color) {
    DrawRectangleRoundedLines(lg_round_to_rect(rect), rect.rounded, 4 + (4 * rect.rounded), color);
}

/// @brief Draws a button
/// @param button The button to draw
/// @param blocked Whether input is blocked (Overrides states)
void lg_draw_button(lg_button_t button, bool blocked) {
    Vector2 cursor = GetMousePosition();
    Rectangle rect = lg_round_to_rect(button.rect);

    if(blocked) goto normal;

    if(!button.enabled) {
        lg_draw_rectangle_round(button.rect, button.disabled);
    } else if(lg_point_in_rect(cursor, rect)) {
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
            lg_draw_rectangle_round(button.rect, button.clicked);
            goto end;
        }
        lg_draw_rectangle_round(button.rect, button.hover);
        goto end;
    } else {
        normal:
        lg_draw_rectangle_round(button.rect, button.normal);
        goto end;
    }

    end:
    lg_draw_text_center(button.text.text, rect, button.text.fontSize, button.text.color);
}