#include<iostream>
#include"ScreenManager.h"
#include<SFML/Graphics.hpp>

using namespace std;

int main() {
    sf::RenderWindow Window(sf::VideoMode(ScreenWidth, ScreenHeight, 32 ), "Calvin Yee Platformer");

    //gameloop
    while(Window.isOpen()) {
        sf::Event event;
        if(Window.pollEvent(event)) {
            if(event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape) {
                Window.close();
            }
        }
        Window.display();
    }

    return 0;
}