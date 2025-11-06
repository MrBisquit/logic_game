#include "../includes.h"

/// @brief Generates a text with the default colors
/// @param text The text
/// @param fontSize The font size
/// @return The text struct
lg_text_t lg_generate_text(const char* text, int fontSize) {
    lg_text_t _text = {
        text,
        lg_get_color("TEXT"),
        fontSize
    };

    return _text;
}

/// @brief Generates a button with the default colors
/// @param rect The button rectangle
/// @param text The text inside the button
/// @return The button struct
lg_button_t lg_generate_button(RoundRectangle rect, lg_text_t text) {
    lg_button_t button = {
        rect,
        .text = text,
        .normal = lg_get_color("BUTTON"),
        .hover = lg_get_color("BUTTON_HOVER"),
        .clicked = lg_get_color("BUTTON_CLICKED"),
        .disabled = lg_get_color("BUTTON_DISABLED"),
        .enabled = true
    };
    
    return button;
}