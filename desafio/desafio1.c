#include <raylib.h>

int main ( void ) {
InitWindow (800 , 800 , " Meu primeiro jogo ") ;
SetTargetFPS (60) ;

Color HEALTHGREEN = {22, 216, 54, 255};

while (! WindowShouldClose () ) { // ate fechar a janela
BeginDrawing () ;

ClearBackground ( SKYBLUE );
DrawRectangle ( 0 , 330 , 800 , 470 , BEIGE );

DrawRectangle ( 0 , 0 , 800 , 80 , DARKBROWN );
DrawRectangle ( 230 , 0 , 40 , 440 , BROWN );
DrawRectangle ( 530 , 0 , 40 , 420 , BROWN );

DrawRectangle ( 520 , 500 , 280 , 130 , LIGHTGRAY);
DrawRectangle ( 540 , 590 , 270 , 20 , HEALTHGREEN );
DrawText ("ARTHUR", 540 , 520 , 50 , DARKGRAY );

DrawRectangle ( 0 , 20 , 280 , 130 , LIGHTGRAY);
DrawRectangle ( 0 , 110 , 270 , 20 , HEALTHGREEN );

EndDrawing () ;
}
CloseWindow () ;
return 0;
}