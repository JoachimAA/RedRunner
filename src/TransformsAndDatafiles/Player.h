#pragma once

#include "GameObject.h"
#include <SFML\Graphics.hpp>

class Player : public GameObject {

public:
    
	Player(float xPosIn, float yPosIn, float xSize, float ySize, std::string playerTexture);
	void Player::render(sf::RenderWindow &window);
	void Player::loadTexture(std::string textureNameIn);

private:

	float xSize;
	float ySize;
	sf::Sprite m_player;
	sf::Texture m_playerTexture;
 };