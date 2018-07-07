#pragma once
#include <string>
#include <SFML\Graphics.hpp>
#include "GameObject.h"

class Background : public GameObject
{
public:

	Background(float xPosition, float yPosition, float xSize, float ySize, std::string textureIn);
	void Background::loadTexture(std::string textureNameIn);

	void Background::render(sf::RenderWindow & window);
	void Background::update(sf::RenderWindow & window);
	void Background::setSpeed(float speed);
	float Background::getSpeed();
	sf::RectangleShape getBackground();

	float getXPos() override;
	float getYPos() override;
	void setXPos(float xPosIn) override;
	void setYPos(float yPosIn) override;



private:

	sf::RectangleShape m_background;
	sf::Texture m_backgroundTexture;
	float m_speed;

};