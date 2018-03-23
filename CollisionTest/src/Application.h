#pragma once

#include <SFML/Graphics.hpp>

#include "TileMap.h"

class Application
{
    public:
        Application();

        void run();

    private:
        void checkWinEvents();
        void onInput();
        void onUpdate();
        void onDraw();

        sf::RenderWindow m_window;
        TileMap m_tileMap;

        sf::RectangleShape m_playerRect;
};