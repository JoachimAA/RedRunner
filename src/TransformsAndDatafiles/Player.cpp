#include "Player.h"
#include <iostream>


Player::Player(float xPosIn, float yPosIn, float xSize, float ySize, std::string textureIn)
{
	loadTexture(textureIn);
	m_player.setPosition(sf::Vector2f(xPosIn, yPosIn));
	m_player.setScale(sf::Vector2f(xSize, ySize));
	m_player.setTexture(m_playerTexture);
	m_player.setScale(sf::Vector2f(0.8f, 0.8f));
	// 1st two numbers tell it where to start the sprite from and 2nd two say the size of the texture
	m_player.setTextureRect(sf::IntRect( 0 ,0, 80, 80));

}

void Player::render(sf::RenderWindow &window)
{
	window.draw(m_player);

}

void Player::loadTexture(std::string textureNameIn)
{
	if (!m_playerTexture.loadFromFile(textureNameIn))
	{
		std::cout << "cannot load" + textureNameIn + "texture" << std::endl;
	}
}


