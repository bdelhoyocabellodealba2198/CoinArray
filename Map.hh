#pragma once //Preguntar a Tona para qué es #pragma once.
#include "Header.hh"

class Map
{
public:
	//CONSTRUCTORS.
	Map();																	   //DEFAULT CONSTRUCTOR of the map.
	Map(int x);																   //CONSTRUCTOR of the map for "EASY", 
																			   //"MEDIUM" or "HARD" mode.

	//DESTRUCTOR.
	~Map();

	//METHODS.
	void drawMap(int difficulty, int x);									   //METHOD to assign a size to the map.

	//MODIFIER METHODS.
	void newCellContent(int rowPosition, int columnPosition, char newContent, int x); //METHOD that modifies the content of a cell.

private:
	//STATIC CONSTANTS.
	static const char map_coins{ '$' };
	static const char map_empty_cell{ '.' };

	//ATTRIBUTES.
	char *map_cells;
	int map_cells_quantity;
};

