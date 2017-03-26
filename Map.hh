#pragma once
#include "Header.hh"

class Map
{
public:
	//CONSTRUCTOR EN FUNCIÓN DE LA DIFICULTAD INTRODUCIDA POR EL JUGADOR
	Map(int difficulty);

	//DESTRUCTOR
	~Map();

	//MÉTODO PARA MODIFICAR EL CONTENIDO DE LA CELDA DESSSSEAADA! RRRRR... (BEA)
	void newCellContent(int rowPosition, int columnPosition, char newContent);

	//MÉTODO PARA OBTENER EL CONTENIDO LA CELDA DESSSEAAADA! RRRR... (BEA)
	char getContent(int rowPosition, int columnPosition);

	//MÉTODO PARA LLENAR LA MATRIZ DE PUNTOS, O SEA, PARA QUE SUS CELDAS ESTÉN "VACÍAS"
	void inicialize();

	//MÉTODO PARA DIBUJAR EL MAPA, QUE REALMENTE ES LA MATRIZ YA CONSTRUIDA E INICIALIZADA
	void drawMap();

	//MÉTODO PARA SABER EL NÚMERO DE FILAS
	int getRows();
	
	//MÉTODO PARA SABER EL NÚMERO DE COLUMNAS
	int getColumns();

	//MÉTODO PARA SABER EL TAMAÑO DE LA MATRIZ, O SEA, EL NÚMERO DE CELDAS (FILAS*COLUMNAS)
	int getMapSize();

private:
	//NÚMERO DE FILAS
	int map_matrix_rows;

	//NÚMERO DE COLUMNAS
	int map_matrix_columns;

	//NÚMERO DE CELDAS
	int map_cells_amount;

	//CHAR QUE REPRESENTA LA CELDA VACÍA
	char empty_cell = '.';

	//PUNTERO A PUNTERO QUE LUEGO USAREMOS PARA CONSTRUIR, INICIALIZAR Y DIBUJAR LA MATRIZ
	char **map_matrix;
};