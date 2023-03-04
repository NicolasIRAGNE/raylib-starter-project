/**
 * @file main.c
 * @author Nicolas IRAGNE (nicolas.iragne@alyce.fr)
 * @brief Entry point of the program
 * @date 2023-03-04
 *
 * @copyright Copyright Alyce (c) 2023
 */

#include <raylib.h>
#include "foo.h"
#include <stdio.h>

int main()
{
    foo();
    InitWindow(800, 450, "Hello World!");
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello World!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
}