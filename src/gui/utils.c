#include "../includes.h"

/// @brief Seeds the random algorithm
void lg_rand_seed(void) {
    srand(time(0));
}

/// @brief Generates a random number between 2 numbers
/// @note Run `lg_rand_seed` before running this
/// @param from From
/// @param to To
/// @return A number between the 2 numbes provided
int lg_rand(int from, int to) {
    return (rand() % to) + from;
}

/// @brief Check if 2 rectangles overlap
/// @param a Rectangle A
/// @param b Rectangle B
/// @return `true` if the rectangles overlap, `false` if not
bool lg_rect_overlap(Rectangle a, Rectangle b) {
    float a_x1 = a.x;
    float a_y1 = a.y;
    float a_x2 = a.x + a.width;
    float a_y2 = a.y + a.height;

    float b_x1 = b.x;
    float b_y1 = b.y;
    float b_x2 = b.x + b.width;
    float b_y2 = b.y + b.height;

    return a_x1 <= b_x2 && a_x2 >= b_x1 && a_y1 <= b_y2 && a_y2 >= b_y1;
}

/// @brief Checks if the point is in the rectangle
/// @param point The point
/// @param rect The rectangle
/// @return `true` if the point is inside the rectangle, `false` if not
bool lg_point_in_rect(Vector2 point, Rectangle rect) {
    float px = point.x;
    float py = point.y;

    float x1 = rect.x;
    float y1 = rect.y;
    float x2 = rect.x + rect.width;
    float y2 = rect.y + rect.height;

    return px >= x1 && px <= x2 && py >= y1 && py <= y2;
}

/// @brief Converts a `RoundRectangle` to a `Rectangle`
/// @param rect The round rectangle
/// @return The normal rectangle
Rectangle lg_round_to_rect(RoundRectangle rect) {
    Rectangle _rect = {
        rect.x,
        rect.y,
        rect.width,
        rect.height
    };

    return _rect;
}

/// @brief Converts a `Rectangle` to a `RoundRectangle`
/// @note This uses `ROUNDING_DEFAULT` for the rounding value
/// @param rect The normal rectangle
/// @return The round rectangle
RoundRectangle lg_rect_to_round(Rectangle rect) {
    RoundRectangle _rect = {
        rect.x,
        rect.y,
        rect.width,
        rect.height,
        ROUNDING_DEFAULT
    };

    return _rect;
}