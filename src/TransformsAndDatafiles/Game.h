#pragma once

#ifndef GAME_H
#define GAME_H

#include <SFML\Graphics.hpp>
#include "Text.h"
#include "Player.h"
#include <sstream>


using namespace std;

class Game {

public:
	Game();
	void load();
	void run();
	void update(sf::RenderWindow &window);
	void render(sf::RenderWindow &window);
	sf::Vector2u getWindowSize();

private:

	sf::Clock fpsClock;
	Text * fpsText;
	float lastTime = 0;
	float oneSecond = 0;
	sf::RenderWindow window;
	stringstream ss;

};

#endif