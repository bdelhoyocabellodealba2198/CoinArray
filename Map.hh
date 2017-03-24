#pragma once
#include "Header.hh"

class Map
{
public:

	Map(int difficulty);

	~Map();

	void newCellContent(int rowPosition, int columnPosition, char newContent);

	char getContent(int rowPosition, int columnPosition);

	void drawMap();
	void inicialize();

	int getRows();

	int getColumns();

	int getMapSize();


private:

	int map_matrix_rows;

	int map_matrix_columns;

	int map_cells_amount;
	char empty_cell = '.';

	char **map_matrix;
};