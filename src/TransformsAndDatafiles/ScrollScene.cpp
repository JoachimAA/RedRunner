#include "ScrollScene.h"

void ScrollScene::load(sf::Vector2u screenSize)
{
	m_player = new Player(640.0f, 542.0f, 20.0f, 20.0f, "../../TransformsAndDatafiles/Assets/ninjarun3.png");
	m_parallaxBackground = new ParallaxBackground(screenSize.x, screenSize.y);
	m_inputHandler = new InputHandler();
}

void ScrollScene::render(sf::RenderWindow &window)
{
	m_parallaxBackground->render(window);
	m_player->render(window);

}

int ScrollScene::update(sf::RenderWindow & window, sf::Event event)
{
	m_inputHandler->checkInput(event);

	if (m_inputHandler->checkKeyDown(sf::Keyboard::Left))
	{
		m_parallaxBackground->updateLeft();
		m_player->runLeft(m_inputHandler->getEventTime());
		return 0;
	}
	if (m_inputHandler->checkKeyDown(sf::Keyboard::Right))
	{
		m_parallaxBackground->updateRight();
		m_player->runRight(m_inputHandler->getEventTime());
		return 0;
	}
	if (m_inputHandler->checkKeyDown(sf::Keyboard::Space))
	{
		m_player->jump(m_inputHandler->getEventTime());
	}
	m_player->notRun();
	return 0;
}

