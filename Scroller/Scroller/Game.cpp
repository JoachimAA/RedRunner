#include "Game.h"


Game::Game() :
	window(sf::VideoMode(1280, 720), "RedRunner")
{
	//setting frame rate
	window.setFramerateLimit(60);
}

void Game::load()
{
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
	}


}

void Game::update(sf::RenderWindow & window)
{

}

void Game::render(sf::RenderWindow & window)
{

	window.display();
}
