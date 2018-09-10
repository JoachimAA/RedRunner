#pragma once
#include "Player.h"


class InputHandler {


public :

	int InputHandler::handleInput(sf::Event ev);
	void InputHandler::checkInput(sf::Event ev);
	void InputHandler::addKeyDown(sf::Keyboard::Key key);
	void InputHandler::deleteKeyUp(sf::Keyboard::Key key);
	bool InputHandler::checkKeyDown(sf::Keyboard::Key key);
	float InputHandler::getEventTime();


private :

	sf::Clock eventClock;
	sf::Time eventTime;
	std::vector<sf::Keyboard::Key> m_keyPresses;
};