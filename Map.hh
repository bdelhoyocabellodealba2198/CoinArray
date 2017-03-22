#pragma once //Preguntar a Tona para qué es #pragma once.
#include "Header.hh"

class Map
{
public:

	Map(int difficulty);

	~Map();

	void newCellContent(int rowPosition, int columnPosition, char newContent);

	char getContent(int rowPosition, int columnPosition);

	void drawMap();

	int getMapSize();

	int getMatrixSize();

private:

	int map_cells_amount;

	int matrix_size;

	char **map_matrix;
};