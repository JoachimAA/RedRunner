#pragma once
#include "Background.h"

class ParallaxBackground {

public :

	ParallaxBackground();
	void ParallaxBackground::update();
	void ParallaxBackground::render(sf::RenderWindow & window);
	

private :

	Background * m_background;
	std::vector<Background*> m_parallaxBackgroundVector;

	float focalPointSpeed = 5.0f;
	float layerdifference = 0.5f;


};