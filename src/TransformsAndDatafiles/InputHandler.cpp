#include "InputHandler.h"
#include <iostream>

int InputHandler::handleInput(sf::Event ev)
{
	if (ev.type == sf::Event::KeyPressed)
	{
		if (ev.key.code == sf::Keyboard::Left)
		{
			return 1;
		}
		if (ev.key.code == sf::Keyboard::Right)
		{
			return 2;
		}
	}


	return 0;
}
//////unused code
void InputHandler::checkInput(sf::Event ev)
{
	if (ev.type == sf::Event::KeyPressed)
	{
		addKeyDown(ev.key.code);
	}
	if (ev.type == sf::Event::KeyReleased)
	{
		deleteKeyUp(ev.key.code);
	}

}

void InputHandler::addKeyDown(sf::Keyboard::Key key)
{
	if (std::find(m_keyPresses.begin(), m_keyPresses.end(), key) == m_keyPresses.end())
	{
		eventClock.restart();
		m_keyPresses.push_back(key);
	}
}

float InputHandler::getEventTime()
{
	if (eventTime.asSeconds() > 1.0f)
	{
		eventClock.restart();
	}
	eventTime = eventClock.getElapsedTime();
	return eventTime.asSeconds();
}

void InputHandler::deleteKeyUp(sf::Keyboard::Key key)
{
	m_keyPresses.erase(std::remove(m_keyPresses.begin(), m_keyPresses.end(), key), m_keyPresses.end());
}

bool InputHandler::checkKeyDown(sf::Keyboard::Key key)
{
	if (std::find(m_keyPresses.begin(), m_keyPresses.end(), key) != m_keyPresses.end())
	{
		return true;
	}
	return false;
}