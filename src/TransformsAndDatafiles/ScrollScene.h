#pragma once

#include <SFML\Graphics.hpp>
#include "Scene.h"

class ScrollScene : public Scene {

public:


	void load() override;
	void render(sf::RenderWindow &window) override;
	void update(sf::RenderWindow &window) override;

private:

};