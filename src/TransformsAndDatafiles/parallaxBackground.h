#pragma once
#include "Background.h"

class ParallaxBackground {

public :

	ParallaxBackground(float screenSizeX, float screenSizeY);
	void ParallaxBackground::updateLeft();
	void ParallaxBackground::updateRight();
	void ParallaxBackground::render(sf::RenderWindow & window);
	

private :

	Background * m_background;
	std::vector<Background*> m_parallaxBackgroundVector;

	float focalPointSpeed = -0.2f;
	float layerdifference = -0.6f;


};