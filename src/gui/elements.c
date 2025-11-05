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