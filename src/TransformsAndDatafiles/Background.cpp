#include "Background.h"
#include <iostream>

Background::Background(float xPosition, float yPosition, float xSize, float ySize, std::string textureIn)
{
	m_background.setPosition(sf::Vector2f(xPosition, yPosition));
	m_background.setSize(sf::Vector2f(xSize, ySize));
	xPos = xPosition;
	yPos = yPosition;
	loadTexture(textureIn);
	m_background.setTexture(&m_backgroundTexture);

}

void Background::loadTexture(std::string textureNameIn)
{
	if (!m_backgroundTexture.loadFromFile(textureNameIn))
	{
		std::cout << "cannot load" + textureNameIn + "texture" << std::endl;
	}

}

void Background::render(sf::RenderWindow & window)
{
	window.draw(m_background);
}

void Background::update(sf::RenderWindow & window)
{
}

void Background::setSpeed(float speed)
{
	m_speed = speed;
}

float Background::getSpeed()
{
	return m_speed;
}

