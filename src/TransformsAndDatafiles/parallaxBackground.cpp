#include "parallaxBackground.h"
#include <iostream>

ParallaxBackground::ParallaxBackground(float screenSizeX, float screenSizeY)
{

	for (int i = 0; i < 5; i++){
		m_background = new Background(0.0f, 0.0f, screenSizeX, screenSizeY, "../../TransformsAndDatafiles/Assets/scene1(" + std::to_string(i + 1) + ").png");
		m_parallaxBackgroundVector.push_back(m_background);
		m_background = new Background(0.0f, 0.0f, screenSizeX, screenSizeY, "../../TransformsAndDatafiles/Assets/scene1(" + std::to_string(i + 1) + ").png");
		m_parallaxBackgroundVector.push_back(m_background); //second one so you have two of the same background
	}
	//setting speed of backgrounds
	for (int i = 0; i < 5; i++) {
		m_parallaxBackgroundVector[i * 2]->setSpeed((i * layerdifference) + focalPointSpeed);
		m_parallaxBackgroundVector[i * 2 + 1]->setSpeed((i * layerdifference) + focalPointSpeed);
		m_parallaxBackgroundVector[i * 2 + 1]->setXPos(screenSizeX);

	}

}

void ParallaxBackground::update()
{
	for (int i = 0; i < 10; i++)
	{
		m_parallaxBackgroundVector[i]->setXPos(m_parallaxBackgroundVector[i]->getXPos() + m_parallaxBackgroundVector[i]->getSpeed());
		std::cout << m_parallaxBackgroundVector[i]->getXPos() << std::endl;

		if (m_parallaxBackgroundVector[i]->getXPos() <= -1280)
		{
			m_parallaxBackgroundVector[i]->setXPos(1280);
		}
	}
}

void ParallaxBackground::render(sf::RenderWindow & window)
{
   for (int i = 0; i < 10; i++)
   {
	  m_parallaxBackgroundVector[i]->render(window);
   }
}


