#pragma once
#include <SFML\Graphics.hpp>
#include "Scene.h"
#include "ScrollScene.h"

class SceneManager {

public: 

	void SceneManager::loadScene(sf::Vector2u screenSize);
	void SceneManager::renderScene(sf::RenderWindow &window);
	void SceneManager::updateScene(sf::RenderWindow &window  ,sf::Event ev);




private:

	int m_currentScene;
	std::vector<Scene*> m_scenes;

};