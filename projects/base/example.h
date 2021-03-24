#pragma once

#include "app.h"
#include "Grid.h"

class Example : public App
{
public:
	Example();
	virtual ~Example();
	virtual bool start();
	virtual void update(float deltaT);
	virtual void render();
	virtual void cleanup();

	static Example &inst();

	sf::Sprite *m_backgroundSprite;

	sf::Texture *normalCatTexture;
	sf::Texture *redCatTexture;
	sf::Texture *blueCatTexture;

	sf::Sprite tiles[20];

	int chosenTileId = 0;

	int map[20] = {
		0, 0, 0, 0, 1,
		0, 0, 0, 0, 1,
		0, 0, 0, 0, 1,
		2, 2, 2, 0, 1
	};

	Grid grid;
};