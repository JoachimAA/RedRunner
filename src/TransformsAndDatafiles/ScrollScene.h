#pragma once

#include <SFML\Graphics.hpp>
#include "Scene.h"
#include "Player.h"
#include "parallaxBackground.h"

class ScrollScene : public Scene {

public:


	void load() override;
	void render(sf::RenderWindow &window) override;
	int update(sf::RenderWindow &window) override;

private:

	ParallaxBackground * m_parallaxBackground;
	Player * m_player;

};