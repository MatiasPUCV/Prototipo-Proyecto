#include <stdio.h>
#include <SDL2/SDL.h>

int main(int argc, char* args[])
{
    // Inicializa SDL
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        printf("Error\n");
    }

    /*
    
        Codigo aqui

    */ 

    // Finaliza SDL
    SDL_Quit();

    return 0;
}