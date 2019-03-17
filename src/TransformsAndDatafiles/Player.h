#pragma once

#include "GameObject.h"
#include <SFML\Graphics.hpp>

class Player : public GameObject {

public:
    
	Player(float xPosIn, float yPosIn, float xSize, float ySize, std::string playerTexture);
	void render(sf::RenderWindow &window);
	void loadTexture(std::string textureNameIn);
	float getPlayerSizeY();
	float getPlayerSizeX();
	void runLeft(float time);
	void runRight(float time);
	void notRun();
	void jump(float time);

private:

	float xSize;
	float ySize;
	bool m_negScale = false;
	bool m_firstPass = true;
	sf::Sprite m_player;
	sf::Texture m_playerTexture;
 };