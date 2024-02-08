#include "SplashScreen.h"

SplashScreen::SplashScreen() {

}
SplashScreen::~SplashScreen() {

}

void SplashScreen::LoadContent() {
    if(!font.loadFromFile("Font1.ttf")) {
        std::cout << "could not find font" << std::endl;
    }
    text.setString("SplashScreen");
    text.setFont(font);
}

void SplashScreen::UnloadContent() {

}
void SplashScreen::Update() {

}
void  SplashScreen::Draw(sf::RenderWindow &Window) {

}