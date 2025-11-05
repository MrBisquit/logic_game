/*
    BSBOT made by William Dawson (MrBisquit on GitHub)
    https://wtdawson.info

    --------------------------------------------------------------------------------------------

    This is my logic game (logically).

    The ONLY dependencies are:
    *   memory.h
    *   malloc.h
    *   string.h
    *   stdio.h
    *   stdint.h
    *   stdlib.h
    *   time.h
    *   raylib.h

    This uses Raylib, which is defined below.

    --------------------------------------------------------------------------------------------

 *  GitHub:     https://github.com/MrBisquit/logic_game
 *  File:       https://github.com/MrBisquit/logic_game/tree/master/src/main.c
 *  License:    SPDX-License-Identifier: MIT
 *              See LICENSE file in the project root for full license text or see below.

    --------------------------------------------------------------------------------------------

    MIT License

    Copyright (c) 2025 William Dawson

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

#include "includes.h"

/// @brief Program entry point
/// @param argc Argument count
/// @param argv Arguments
/// @return Return code
int main(int argc, char* argv[]) {
    InitWindow(WINDOW_DEFAULT_WIDTH, WINDOW_DEFAULT_HEIGHT, "Logically (Logic Game)");
    SetTargetFPS(WINDOW_TARGET_FPS);

    //lg_log("Started");

    lg_rand_seed();

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(lg_get_color("BACKGROUND"));

        Rectangle rect = {
            .x = 10,
            .y = 10,
            .width = 500,
            .height = 250
        };

        Vector2 cursor = GetMousePosition();
        rect.x += cursor.x;
        rect.y += cursor.y;

        DrawRectangle(rect.x, rect.y, rect.width, rect.height, WHITE);
        lg_draw_text_center("Center", rect, 25, BLACK);
        lg_draw_text_center_offset("Top", rect, (Vector2){ .x = 0, .y = -50 }, 17, BLACK);
        lg_draw_text_center_offset("Left", rect, (Vector2){ .x = -100, .y = 0 }, 17, BLACK);
        lg_draw_text_center_offset("Bottom", rect, (Vector2){ .x = 0, .y = 50 }, 17, BLACK);
        lg_draw_text_center_offset("Right", rect, (Vector2){ .x = 100, .y = 0 }, 17, BLACK);

        DrawLine(rect.x, rect.y, rect.x + rect.width, rect.y + rect.height, RED);
        DrawLine(rect.x + rect.width, rect.y, rect.x, rect.y + rect.height, RED);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}