#include <raylib.h>
#include <stdio.h>

int main()
{
    InitWindow(800, 450, "Hello World!");
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello World!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }
}