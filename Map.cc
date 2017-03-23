#include "Header.hh"

Map::Map(int difficulty) 
{
	matrix_size = rand() % (5 * difficulty * 2) + (5 * difficulty);
	map_matrix = new char*[matrix_size];
	map_cells_amount = matrix_size*matrix_size;
}

Map::~Map()
{
	delete[]map_matrix;
}

void Map::drawMap()
{
	for (int i = 0, j = 0; j < matrix_size; i++)
	{
			if (i < matrix_size)
			{
				std::cout << " . ";
			}
			else
			{
				std::cout << std::endl;
				i = -1;
				j++;
			}
	}

	std::cout << std::endl;
	std::cout << matrix_size;
}

void Map::newCellContent(int rowPosition, int columnPosition, char newContent)
{
	map_matrix[rowPosition][columnPosition] = newContent;
}

char Map::getContent(int rowPosition, int columnPosition)//Devuelve el valor interno de la celda a la que 
														//queremos acceder. 
	
{
	char content;
    content= map_matrix[rowPosition][columnPosition];

	return content;
}

int Map::getMapSize() 
{
	return map_cells_amount;
}

int Map::getMatrixSize() 
{
	return matrix_size;
}
