#include "Player.h"


Player::Player(float xPosIn, float yPosIn, float xSize, float ySize, sf::Texture playerTexture)
{
	setXPos(xPosIn);
	setYPos(yPosIn);


}

void Player::render(sf::RenderWindow window)
{
	window.draw(m_player);

}
