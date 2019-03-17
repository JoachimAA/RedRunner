#include "Player.h"
#include <iostream>


Player::Player(float xPosIn, float yPosIn, float xSize, float ySize, std::string textureIn)
{
	loadTexture(textureIn);
	m_player.setPosition(sf::Vector2f(xPosIn, yPosIn));
	m_player.setScale(sf::Vector2f(xSize, ySize));
	m_player.setTexture(m_playerTexture);
	m_player.setScale(sf::Vector2f(0.15f, 0.15f));
	//m_playerTexture.setSmooth(true);
	// 1st two numbers tell it where to start the sprite from and 2nd two say the size of the texture
	m_player.setTextureRect(sf::IntRect( 0 ,0, 250, 450));
	yPos = yPosIn;
	xPos = xPosIn;

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

float Player::getPlayerSizeX() {
	return m_player.getTextureRect().width * m_player.getScale().x;
}

float Player::getPlayerSizeY() {
	return m_player.getTextureRect().height * m_player.getScale().y;
}

void Player::runLeft(float time)
{
	if (m_negScale == false) {
		 m_negScale = true;
		 m_player.setPosition(sf::Vector2f(m_player.getPosition().x + getPlayerSizeX(), m_player.getPosition().y));

	}

	
	if (time <= 0.1f) {
		m_player.setTextureRect(sf::IntRect(250, 0, 350, 450));
	}
	if (time <= 0.2f && time > 0.1f) {
		m_player.setTextureRect(sf::IntRect(610, 0, 350, 450));
	}
	if (time <= 0.3f && time > 0.2f) {
		m_player.setTextureRect(sf::IntRect(970, 0, 350, 450));
	}
	if (time <= 0.4f && time > 0.3f) {
		m_player.setTextureRect(sf::IntRect(1340, 0, 350, 450));
	}
	if (time <= 0.5f && time > 0.4f) {
		m_player.setTextureRect(sf::IntRect(1710, 0, 350, 450));
	}
	if (time <= 0.6f && time > 0.5f) {
		m_player.setTextureRect(sf::IntRect(20, 452, 350, 450));
	}
	if (time <= 0.7f && time > 0.6f) {
		m_player.setTextureRect(sf::IntRect(390, 452, 350, 450));
	}
	if (time <= 0.8f && time > 0.7f) {
		m_player.setTextureRect(sf::IntRect(740, 452, 350, 450));
	}
	if (time <= 0.9f && time > 0.8f) {
		m_player.setTextureRect(sf::IntRect(1100, 452, 350, 450));
	}
	if (time <= 1.0f && time > 0.9f) {
		m_player.setTextureRect(sf::IntRect(1480, 452, 350, 450));
	}

	//m_player.setTextureRect(sf::IntRect(250, 0, 350, 450));
	m_player.setScale(-0.15f, 0.15f);
}
void Player::runRight(float time)
{
	if (m_negScale) {
		m_negScale = false;
		m_player.setPosition(sf::Vector2f(m_player.getPosition().x + getPlayerSizeX(), m_player.getPosition().y));
	}


	if (time <= 0.1f) {
		m_player.setTextureRect(sf::IntRect(250, 0, 350, 450));
	}
	if (time <= 0.2f && time > 0.1f) {
		m_player.setTextureRect(sf::IntRect(610, 0, 350, 450));
	}
	if (time <= 0.3f && time > 0.2f) {
		m_player.setTextureRect(sf::IntRect(970, 0, 350, 450));
	}
	if (time <= 0.4f && time > 0.3f) {
		m_player.setTextureRect(sf::IntRect(1340, 0, 350, 450));
	}
	if (time <= 0.5f && time > 0.4f) {
		m_player.setTextureRect(sf::IntRect(1710, 0, 350, 450));
	}
	if (time <= 0.6f && time > 0.5f) {
		m_player.setTextureRect(sf::IntRect(20, 452, 350, 450));
	}
	if (time <= 0.7f && time > 0.6f) {
		m_player.setTextureRect(sf::IntRect(390, 452, 350, 450));
	}
	if (time <= 0.8f && time > 0.7f) {
		m_player.setTextureRect(sf::IntRect(740, 452, 350, 450));
	}
	if (time <= 0.9f && time > 0.8f) {
		m_player.setTextureRect(sf::IntRect(1100, 452, 350, 450));
	}
	if (time <= 1.0f && time > 0.9f) {
		m_player.setTextureRect(sf::IntRect(1480, 452, 350, 450));
	}


	//m_player.setTextureRect(sf::IntRect(390, 452, 350, 450));
	m_player.setScale(0.15f, 0.15f);
}

void Player::jump(float time)
{
	if (m_negScale) {
		m_negScale = false;
		m_player.setPosition(sf::Vector2f(m_player.getPosition().x + getPlayerSizeX(), m_player.getPosition().y));
	}

	if (time <= 0.1f) {
		m_player.setTextureRect(sf::IntRect(250, 0, 350, 450));
		m_player.setPosition(m_player.getPosition() + sf::Vector2f(0.0, -5.0f));
	}
	if (time <= 0.2f && time > 0.1f) {
		m_player.setTextureRect(sf::IntRect(610, 0, 350, 450));
		m_player.setPosition(m_player.getPosition() + sf::Vector2f(0.0, -5.0f));
	}
	if (time <= 0.3f && time > 0.2f) {
		m_player.setTextureRect(sf::IntRect(970, 0, 350, 450));
		m_player.setPosition(m_player.getPosition() + sf::Vector2f(0.0, -5.0f));
	}
	if (time <= 0.4f && time > 0.3f) {
		m_player.setTextureRect(sf::IntRect(1340, 0, 350, 450));
	}
	if (time <= 0.5f && time > 0.4f) {
		m_player.setTextureRect(sf::IntRect(1710, 0, 350, 450));
	}
	if (time <= 0.6f && time > 0.5f) {
		m_player.setTextureRect(sf::IntRect(20, 452, 350, 450));
	}
	if (time <= 0.7f && time > 0.6f) {
		m_player.setTextureRect(sf::IntRect(390, 452, 350, 450));
		m_player.setPosition(m_player.getPosition() + sf::Vector2f(0.0, 5.0f));
	}
	if (time <= 0.8f && time > 0.7f) {
		m_player.setTextureRect(sf::IntRect(740, 452, 350, 450));
		m_player.setPosition(m_player.getPosition() + sf::Vector2f(0.0, -5.0f));
	}
	if (time <= 0.9f && time > 0.8f) {
		m_player.setTextureRect(sf::IntRect(1100, 452, 350, 450));
		m_player.setPosition(m_player.getPosition() + sf::Vector2f(0.0, -5.0f));
	}
	if (time <= 1.0f && time > 0.9f) {
		m_player.setTextureRect(sf::IntRect(1480, 452, 350, 450));
		m_player.setPosition(m_player.getPosition() + sf::Vector2f(0.0, -5.0f));
	}
}

float Player::getXPos()
{
	return xPos;
}

float Player::getYPos()
{
	return yPos;
}

void Player::setXPos(float xPosIn)
{
	m_player.setPosition(sf::Vector2f(xPosIn, getYPos()));
}

void Player::setYPos(float yPosIn)
{
	m_player.setPosition(sf::Vector2f(getXPos(), yPosIn));
}

void Player::notRun()
{
	if (m_negScale) {
		m_negScale = false;
		m_player.setPosition(sf::Vector2f(m_player.getPosition().x + getPlayerSizeX(), m_player.getPosition().y));
	}
	m_player.setTextureRect(sf::IntRect(0, 0, 250, 450));
	m_player.setScale(0.15f, 0.15f);

}


