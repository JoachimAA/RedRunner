#include "Game.h"
#include <iostream>


Game::Game() :
	window(sf::VideoMode(1280, 720), "RedRunner")
{
	//setting frame rate
	window.setFramerateLimit(60);
}

void Game::load()
{
	fpsText = new Text("../../TransformsAndDatafiles/Assets/ABeeZee-Regular.ttf", "", 20.0f, sf::Color::White, getWindowSize().x / 1000, getWindowSize().y / 1000);


	run();
}

void Game::run()
{

	while (window.isOpen())
	{
		sf::Event ev;
		//Handle input
		while (window.pollEvent(ev))
		{
			if (ev.type == sf::Event::Closed) window.close();
		}

		update(window);
		render(window);

		//clears screen
		window.clear(sf::Color::Blue);
	}


}

void Game::update(sf::RenderWindow & window)
{



	//// FPS COUNTER/////////
	float currentTime = fpsClock.restart().asSeconds();
	float fps = 1.0f / currentTime;
	lastTime = currentTime;

	
	oneSecond += currentTime;
	cout << oneSecond << endl;
	if (oneSecond > 0.1f) {
		int n = static_cast<int>(fps);
		ss << n;
		fpsText->setMessage(ss.str());
		ss.str("");
		oneSecond = 0;
	}
	/////////////////////////
}

void Game::render(sf::RenderWindow & window)
{
	fpsText->render(window);
	window.display();
	
}

sf::Vector2u Game::getWindowSize()
{
	return window.getSize();
}
