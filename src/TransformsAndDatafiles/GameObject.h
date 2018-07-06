#pragma once

#include <string>
#include <SFML\Graphics.hpp>

class GameObject {
public:

	float GameObject::getXPos();
	float GameObject::getYPos();
	void GameObject::setXPos(float xPosIn);
	void GameObject::setYPos(float yPosIn);
	void GameObject::loadTexture(sf::Texture textureIn, std::string textureNameIn);

protected:
	float xPos;
	float yPos;

private:



};