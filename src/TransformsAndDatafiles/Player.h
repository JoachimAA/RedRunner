#pragma once

#include "GameObject.h"
#include <SFML\Graphics.hpp>

class Player : public GameObject {

public:
    
	Player(float xPosIn, float yPosIn, float xSize, float ySize, sf::Texture playerTexture);
	void Player::render(sf::RenderWindow window);


private:

	float xSize;
	float ySize;
	sf::Sprite m_player;
 };