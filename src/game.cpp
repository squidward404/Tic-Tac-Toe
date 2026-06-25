#include<iostream>

#include "score.h"


// third-party stuff
#include "raylib.h"




int main(void){

    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Tic-Tac-Toe");

    SetTargetFPS(60); 


    while(!WindowShouldClose()) {

        BeginDrawing();
        {
            ClearBackground(RAYWHITE);
            DrawText("Tic-Tac-Toe Basic Window", 190, 200, 20, LIGHTGRAY);
        }
        EndDrawing();


    }


    CloseWindow();
    
    return 0;
}
