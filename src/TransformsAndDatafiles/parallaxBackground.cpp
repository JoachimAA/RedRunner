#include "parallaxBackground.h"
#include <iostream>

ParallaxBackground::ParallaxBackground()
{

	for (int i = 0; i < 5; i++){
		m_background = new Background(0.0f, 0.0f, 1920.0f, 720.0f, "../../TransformsAndDatafiles/Assets/Desert" + std::to_string(i + 1) + ".png");
		m_parallaxBackgroundVector.push_back(m_background);
	}
	//setting speed of backgrounds
	for (int i = 0; i < 4; i++) {
		m_parallaxBackgroundVector[i]->setSpeed((i * layerdifference) + 3);
	}
	//m_parallaxBackgroundVector[4]->setSpeed(focalPointSpeed);
}

void ParallaxBackground::update()
{
	for (int i = 0; i < 5; i++)
	{
		m_parallaxBackgroundVector[i]->setXPos(m_parallaxBackgroundVector[i]->getXPos() + m_parallaxBackgroundVector[i]->getSpeed());
	}
}

void ParallaxBackground::render(sf::RenderWindow & window)
{
   for (int i = 0; i < 5; i++)
   {
	  m_parallaxBackgroundVector[i]->render(window);
   }
}


