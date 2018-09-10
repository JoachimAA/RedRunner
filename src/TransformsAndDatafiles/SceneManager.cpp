#include "SceneManager.h"

void SceneManager::loadScene(sf::Vector2u screenSize)
{

	m_scenes.push_back(new ScrollScene());
	m_currentScene = 0;

	m_scenes[m_currentScene]->load(screenSize);
}

void SceneManager::renderScene(sf::RenderWindow &window)
{
	m_scenes[m_currentScene]->render(window);
}

void SceneManager::updateScene(sf::RenderWindow &window, sf::Event ev)
{

	m_scenes[m_currentScene]->update(window, ev);
}
