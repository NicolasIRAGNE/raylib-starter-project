/**
 * @file main.cpp
 * @author Nicolas IRAGNE (nicoragne@hotmail.fr)
 * @brief Simple main file to test the boilerplate
 * @date 2023-03-09
 *
 * @copyright Copyright niragne (c) 2023
 */

#include <raylib.h>
#include "foo.h"

int main()
{
    starter_project::foo();
    InitWindow(800, 450, "raylib [core] example - basic window");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}