#pragma once

#ifndef GAME_H
#define GAME_H

#include <SFML\Graphics.hpp>

using namespace std;

class Game {

public:
	Game();
	void load();
	void run();
	void update(sf::RenderWindow &window);
	void render(sf::RenderWindow &window);
private:

	sf::RenderWindow window;


};

#endif
