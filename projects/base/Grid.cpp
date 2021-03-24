#include "Grid.h"
#include <iostream>

Grid::Grid()
{
	for (size_t i = 0; i < HORIZONTAL_ARRAY_SIZE; i++)
	{
		horizontal_lines[i].setSize(sf::Vector2f(HORIZONTAL_LINE_SIZE_X, HORIZONTAL_LINE_SIZE_Y));
		horizontal_lines[i].setPosition(
			sf::Vector2f(
				GRID_OFFSET_X,
				GRID_OFFSET_Y + i * CELL_HEIGHT)
		);
	}

	for (size_t i = 0; i < VERTICLE_ARRAY_SIZE; i++)
	{
		verticle_lines[i].setSize(sf::Vector2f(VERTICLE_LINE_SIZE_X, VERTICLE_LINE_SIZE_Y));
		verticle_lines[i].setPosition(
			sf::Vector2f(
				GRID_OFFSET_X + i * CELL_WIDTH,
				GRID_OFFSET_Y)
		);
	}
}

Grid::~Grid()
{
}

void Grid::Draw(sf::RenderWindow& window)
{
	for (size_t i = 0; i < HORIZONTAL_ARRAY_SIZE; i++)
	{
		window.draw(horizontal_lines[i]);
	}

	for (size_t i = 0; i < VERTICLE_ARRAY_SIZE; i++)
	{
		window.draw(verticle_lines[i]);
	}	
}