#include "Header.hh"

Map::Map() :
	map_cells {new char[5, 10]},
	map_cells_quantity{30}
{}

Map::Map(int x) 
{
	map_cells = new char [5*x, 5*x*2];
	map_cells_quantity = 5 * x + 5 * x * 2;
}

void Map::drawMap(int difficulty, int x)
{
	for (int i = 0, j = 0; j < 5*x*2; i++)
	{
			if (i < 5 * x)
			{
				std::cout << map_empty_cell << " ";
			}
			else
			{
				std::cout << std::endl;
				i = -1;
				j++;
			}
	}
}

void Map::newCellContent(int rowPosition, int columnPosition, char newContent, int x) 
{
	char *newMapCells = new char[5 * x, 5 * x * 2];
	int counterJ;
	int counterI;

	for (int j = 0, i = 0; j < 5 * x || i < 5 * x * 2; i++)
	{
		if (j == columnPosition && i == rowPosition)
		{
			newMapCells[j, i] = newContent;

			if (j < 5 * x)
			{
				j++;
			}
			else
			{
				std::cout << std::endl;
				i++;
				j = 0;
			}
		}

		if (j < 5 * x)
		{
			newMapCells[j, i] = map_cells[j, i];
			j++;
		}
		else
		{
			std::cout << std::endl;
			newMapCells[j, i] = map_cells[j, i];
			i++;
			j = 0;
		}
		/*counterJ = j;
		counterI = i;*/
	}
	delete[] map_cells;

/*	while (counterJ > 0 || counterI >> 0) PREGUNTAR A TONA si hay alguna manera de hacer un recorrido hacia arriba.
	{
		if (counterJ > 0) 
		{

		}
	}
*/
	for (int j = 0, i = 0; j < 5 * x || i < 5 * x * 2; i++) 
	{
		if (j < 5 * x)
		{
			map_cells[j, i] = newMapCells[j, i];
			j++;
		}
		else
		{
			std::cout << std::endl;
			map_cells[j, i] = newMapCells[j, i];
			i++;
			j = 0;
		}
	}
	//PREGUNTAR A TONA: ya no necesito newMapCells[ , ], ¿Puedo destruir este char array de alguna
	//manera? O simplemente uso delete[] newMapCells (que en teoría sólo borra el contenido de la memoria).
}

Map::~Map()
{
	delete[]map_cells;
}
