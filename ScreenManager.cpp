#include "ScreenManager.h"


GameScreen *currentScreen, *newScreen;

ScreenManager &ScreenManager::GetInstance() {
    static ScreenManager instance;
    return instance;
}

ScreenManager::ScreenManager() {

}
ScreenManager::~ScreenManager() {

}
void ScreenManager::Initialize() {
    currentScreen = new SplashScreen();
}
void ScreenManager::LoadContent() {
    currentScreen->LoadContent();
}
void ScreenManager::Update() {
    currentScreen->Update();
}
void ScreenManager::Draw(sf::RenderWindow &Window) {
    currentScreen->Draw(Window);
}