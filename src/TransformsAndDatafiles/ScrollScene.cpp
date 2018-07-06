#include "ScrollScene.h"

void ScrollScene::load()
{
	m_player = new Player(100.0f, 100.0f, 20.0f, 20.0f, "../../TransformsAndDatafiles/Assets/ninja.png");
	m_parallaxBackground = new ParallaxBackground();
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
