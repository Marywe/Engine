
// This is free code released into the public domain.
// Drafted by �ngel in January 2019.
// angel.rodriguez@esne.edu

// SDL no soluciona del todo bien el problema de llamar a main() desde WinMain().
// Esta es una alternativa que funciona y no da problemas.

#if defined(_WIN32) || defined(_WIN64)

#include <windows.h>
#include <iostream>
//#include "Window.hpp"
using namespace std;
extern int main(int, char**);

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, INT)
{
    //return main(__argc, __argv);
    
    return 0;
}

#endif
