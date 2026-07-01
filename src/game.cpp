#include<iostream>

#include "score.h"

// third-party stuff(include the raylib library)
#include "raylib.h"

     /*Define ur functions here*/

//function to print the board
void display_board(){

DrawText("TIC-TAC-TOE--GAME",260,0,25,GREEN);
DrawText("PLAYER-1[x]",250,30,19,BLACK);
DrawText("PLAYER-2[o]",450,30,19,BLACK);
DrawLine(325,75,325,525,BLACK);
DrawLine(475,75,475,525,BLACK);
DrawLine(175,225,625,225,BLACK);
DrawLine(175,375,625,375,BLACK);

}

//function to draw 'x' and 'o' inside the boxes
void draw_marks(){

//an array to hold the x's and the O's which will later be inserted by the two players.
char board[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

int startX=175;
int startY=75;
int board_size=450;
int cell_size=board_size/3;
for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
       int x=startX+col*cell_size+cell_size/2;
       int y=startY+row*cell_size+cell_size/2;
       if(board[row][col]=='x'){
        DrawText("x",x-20,y-40,80,RED);
       }
       else if(board[row][col]=='o'){
        DrawText("o",x-20,y-40,80,BLUE);
       }
    }
}

}

int main(void){

    //declaring and initializing the width and height variables which determine the size of the window
    const int screenWidth = 800;
    const int screenHeight = 600;

    //a raylib built in function that is used to draw the background window and it takes 3 arguments:width,height and title.
    InitWindow(screenWidth, screenHeight, "Tic-Tac-Toe");
    
    //this built in function determines how fast the game runs
    SetTargetFPS(60); 

    //game loop and it runs as long as the WindowShouldClose() function(another built in function) is false i.e until the window is closed
    while(!WindowShouldClose()) {

        BeginDrawing();
        
            //clears the background after every frame
            ClearBackground(RAYWHITE);
             
            //calling the display_board function that I've previously initialized 
            display_board();

                          /*Write your code Here*/
                          
            //Draws the 'x' and 'o' inside the board
            draw_marks();
        EndDrawing();


    }

    //Closes the window after the game loop is finished
    CloseWindow();
    
    return 0;
}
