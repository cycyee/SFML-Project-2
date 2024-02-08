#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include<SFML/Graphics.hpp>
#include "GameScreen.h"

class SplashScreen : public GameScreen {
    public:
        SplashScreen();
        ~SplashScreen();

        void LoadContent();
        void UnloadContent();
        void Update();
        void Draw(sf::RenderWindow &Window);

        
    protected:
    private:
        sf::Text text;
        sf::Font font;
};



#endif