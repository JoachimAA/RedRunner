#include "ScrollScene.h"

void ScrollScene::load(sf::Vector2u screenSize)
{
	m_player = new Player(640.0f, 544.0f, 20.0f, 20.0f, "../../TransformsAndDatafiles/Assets/ninja.png");
	m_parallaxBackground = new ParallaxBackground(screenSize.x, screenSize.y);
}

void ScrollScene::render(sf::RenderWindow &window)
{
	m_parallaxBackground->render(window);
	m_player->render(window);

}

int ScrollScene::update(sf::RenderWindow & window)
{
	m_parallaxBackground->update();
	return 0;
}
