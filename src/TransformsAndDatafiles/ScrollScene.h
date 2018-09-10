#pragma once

#include <SFML\Graphics.hpp>
#include "Scene.h"
#include "Player.h"
#include "parallaxBackground.h"
#include "InputHandler.h"

class ScrollScene : public Scene {

public:


	void load(sf::Vector2u screenSize) override;
	void render(sf::RenderWindow &window) override;
	int update(sf::RenderWindow &window, sf::Event event) override;

private:

	ParallaxBackground * m_parallaxBackground;
	InputHandler * m_inputHandler;
	Player * m_player;

	bool playerIdle = true;
	bool playerLeft = false;
	bool playerRight = false;

};