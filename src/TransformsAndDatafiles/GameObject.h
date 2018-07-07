#pragma once

#include <string>
#include <SFML\Graphics.hpp>

class GameObject {
public:

	virtual float getXPos() = 0;
	virtual float getYPos() = 0;
	virtual void setXPos(float xPosIn) = 0;
	virtual void setYPos(float yPosIn) = 0;

protected:
	float xPos;
	float yPos;

private:



};