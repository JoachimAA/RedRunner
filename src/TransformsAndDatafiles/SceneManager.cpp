#include "SceneManager.h"

void SceneManager::loadScene()
{

	m_scenes.push_back(new ScrollScene());
	m_currentScene = 0;

	m_scenes[m_currentScene]->load();
}

void SceneManager::renderScene(sf::RenderWindow &window)
{
	m_scenes[m_currentScene]->render(window);
}

void SceneManager::updateScene(sf::RenderWindow &window)
{

	m_scenes[m_currentScene]->update(window);
}
