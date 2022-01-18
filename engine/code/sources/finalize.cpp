
// This is free code released into the public domain.
// Drafted by Ángel in January 2019.
// angel.rodriguez@esne.edu

#include <../../libraries/windows/sdl2-vs/include/SDL.h>

namespace engine
{

    /** Esta función se llamará automáticamente al salir de la función main() solo
      * si se inicializa algún subsistema de SDL.
      */
    void finalize ()
    {
        SDL_Quit ();
    }

}
