#pragma once

class GameObject {
public:

	float GameObject::getXPos();
	float GameObject::getYPos();
	void GameObject::setXPos(float xPosIn);
	void GameObject::setYPos(float yPosIn);



private:

	float xPos;
	float yPos;

};