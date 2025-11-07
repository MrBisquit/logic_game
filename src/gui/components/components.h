#pragma once

/*
    This file contains the definitions for components

    These are the available components:
    - Message box (Or prompt), different types of message boxes
        - Normal message box (Title, description, 2 buttons at the bottom right)
        - Input prompt (Title, description, text box, 2 buttons at the bottom right)
        - And a custom one, which basically means you just draw the stuff yourself
*/

void lg_draw_overlay(void);
Rectangle lg_draw_popup(float width, float height);