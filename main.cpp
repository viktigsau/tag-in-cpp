#include <iostream>
#include "window.cpp"
#include "player.cpp"
#include <vector>


int Height = 100;
int Width = 100;

int fps = 30;

bool Resizable = false;

std::vector<float> Spawn = std::vector<float>(0, 0);

void main() {
    Player player;

    player.init(Spawn);
}