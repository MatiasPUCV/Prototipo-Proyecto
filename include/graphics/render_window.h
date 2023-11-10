#ifndef RENDER_WINDOW_H
#define RENDER_WINDOW_H

#include <SDL2/SDL.h>

class RenderWindow {
public:

    RenderWindow(const char* title, int width, int height);
    ~RenderWindow();

    /* Cierra la ventana */
    void close();

    /* Revisa si la ventana esta abierta */
    bool is_open() { return !this->is_closed; };

    /* Muestra un fotograma */
    void display();

    /* Limpia un fotograma */
    void clear();

    /* Dibuja un objeto */

    SDL_Window* window;

    bool is_closed;
};

#endif // RENDER_WINDOW_H