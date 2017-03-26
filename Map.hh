#pragma once
#include "Header.hh"

class Map
{
public:
	//CONSTRUCTOR EN FUNCI�N DE LA DIFICULTAD INTRODUCIDA POR EL JUGADOR
	Map(int difficulty);

	//DESTRUCTOR
	~Map();

	//M�TODO PARA MODIFICAR EL CONTENIDO DE LA CELDA DESSSSEAADA! RRRRR... (BEA)
	void newCellContent(int rowPosition, int columnPosition, char newContent);

	//M�TODO PARA OBTENER EL CONTENIDO LA CELDA DESSSEAAADA! RRRR... (BEA)
	char getContent(int rowPosition, int columnPosition);

	//M�TODO PARA LLENAR LA MATRIZ DE PUNTOS, O SEA, PARA QUE SUS CELDAS EST�N "VAC�AS"
	void inicialize();

	//M�TODO PARA DIBUJAR EL MAPA, QUE REALMENTE ES LA MATRIZ YA CONSTRUIDA E INICIALIZADA
	void drawMap();

	//M�TODO PARA SABER EL N�MERO DE FILAS
	int getRows();
	
	//M�TODO PARA SABER EL N�MERO DE COLUMNAS
	int getColumns();

	//M�TODO PARA SABER EL TAMA�O DE LA MATRIZ, O SEA, EL N�MERO DE CELDAS (FILAS*COLUMNAS)
	int getMapSize();

private:
	//N�MERO DE FILAS
	int map_matrix_rows;

	//N�MERO DE COLUMNAS
	int map_matrix_columns;

	//N�MERO DE CELDAS
	int map_cells_amount;

	//CHAR QUE REPRESENTA LA CELDA VAC�A
	char empty_cell = '.';

	//PUNTERO A PUNTERO QUE LUEGO USAREMOS PARA CONSTRUIR, INICIALIZAR Y DIBUJAR LA MATRIZ
	char **map_matrix;
};