/*
 * Made by weld. Github : @atomicwelding. 
 */


#include <raylib.h>

typedef struct params {
    const int SCREEN_WIDTH;
    const int SCREEN_HEIGHT;
    const char* TITLE;
    const int FPS;
} params;


int main(void) {
    params p = { .SCREEN_WIDTH = 400, .SCREEN_HEIGHT = 400, .TITLE = "Raylib Template", .FPS = 60 };
    
    InitWindow(p.SCREEN_WIDTH, p.SCREEN_HEIGHT, p.TITLE);
    SetTargetFPS(p.FPS);
    
    while(!WindowShouldClose()) {
        // computing
                
        // drawing
        BeginDrawing();
        ClearBackground(WHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
        
