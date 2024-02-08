#ifndef SCREENMANAGER_H
#define SCREENMANAGER_H

#include<string> 
#include<iostream>
#include "GameScreen.h"
#include "SplashScreen.h"

#define ScreenWidth 800
#define ScreenHeight 600

class ScreenManager {
    public:
        ~ScreenManager();
        static ScreenManager &GetInstance();

        void Initialize();
        void LoadContent();
        void Update();
        void UnloadContent();
        void Draw(sf::RenderWindow &Window);
    protected:
    private:
        GameScreen *currentScreen, *newScreen;

        ScreenManager();
        ScreenManager(ScreenManager const&);
        void operator = (ScreenManager const&);
};

#endif