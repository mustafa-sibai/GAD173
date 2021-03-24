#pragma once
#include <SFML/Graphics.hpp>

#define GRID_OFFSET_X 0
#define GRID_OFFSET_Y 0

#define CELL_WIDTH 56
#define CELL_HEIGHT 56

#define HORIZONTAL_ARRAY_SIZE 10
#define VERTICLE_ARRAY_SIZE 10

#define HORIZONTAL_LINE_SIZE_X 500
#define HORIZONTAL_LINE_SIZE_Y 2

#define VERTICLE_LINE_SIZE_X 2
#define VERTICLE_LINE_SIZE_Y 500

class Grid
{
public:
	Grid();
	~Grid();

	void Draw(sf::RenderWindow& window);
	sf::RectangleShape horizontal_lines[HORIZONTAL_ARRAY_SIZE];
	sf::RectangleShape verticle_lines[HORIZONTAL_ARRAY_SIZE];
};