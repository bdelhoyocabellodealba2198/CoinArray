#include "Header.hh"

Map::Map(int difficulty) 
{
	map_matrix_rows = rand() % (5 * difficulty * 2) + (5 * difficulty);
	map_matrix_columns = rand() % (5 * difficulty * 2) + (5 * difficulty);

	map_cells_amount = map_matrix_rows*map_matrix_columns;

	map_matrix = new char*[map_matrix_rows];

		for (int i = 0; i < map_matrix_rows; i++) 
		{
			map_matrix[i] = new char[map_matrix_columns];
		}
	
		
}

Map::~Map()
{
	for (int i = 0; i < map_matrix_rows; i++)
	{
		delete[]map_matrix[i];
	}
	delete[]map_matrix;
}

void Map::inicialize()
{

	for (int i = 0; i < map_matrix_rows; i++) {
		for (int j = 0; j < map_matrix_columns; j++) {
			map_matrix[i][j] = empty_cell;

		}
	}
}
void Map::drawMap()
{
	for (int i = 0; i < map_matrix_rows; i++) {
		for (int j = 0; j < map_matrix_columns; j++) {
			std::cout<<map_matrix[i][j];
		}
		std::cout << std::endl;
	}
}

void Map::newCellContent(int rowPosition, int columnPosition, char newContent)
{
	map_matrix[rowPosition][columnPosition] = newContent;
}

char Map::getContent(int rowPosition, int columnPosition)
{
	char content;

    content = map_matrix[rowPosition][columnPosition];

	return content;
}

int Map::getRows() 
{
	return map_matrix_rows;
}

int Map::getColumns()
{
	return map_matrix_columns;
}

int Map::getMapSize() 
{
	return map_cells_amount;
}

