#include "../../includes.h"

/// @brief Draws an overlay (or shadow) for things like popups
void lg_draw_overlay(void) {
    DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), lg_get_color("OVERLAY"));
}

/// @brief Draws the popup
/// @note Uses `ROUNDING_POPUP` for the rounding
/// @param width
/// @param height
/// @returns The rectangle
Rectangle lg_draw_popup(float width, float height) {
    RoundRectangle rect = {
        (GetScreenWidth() / 2) - (width / 2),
        (GetScreenHeight() / 2) - (height / 2),
        width,
        height,
        ROUNDING_POPUP
    };

    lg_draw_rectangle_round(rect, lg_get_color("POPUP_BACKGROUND"));
}