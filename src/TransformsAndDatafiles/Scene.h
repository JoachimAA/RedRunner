#pragma once

#include <SFML\Graphics.hpp>

class Scene
{
public:

	virtual void load(sf::Vector2u screenSize) = 0;
	virtual void render(sf::RenderWindow &window) = 0;
	virtual int update(sf::RenderWindow &window) = 0;

};