#include <iostream>
#include "window.cpp"

int Height = 100;
int Width = 100;

int fps = 30;

bool Resizable = false;

void main() {
    Window window;

    window.init(Height, Width, Resizable, fps);
}