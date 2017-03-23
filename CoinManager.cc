#include "Header.hh" 
/*
CoinManager::CoinManager(Map &M):Mapa{M}//Constructor del mapa
{
		
	totalCoins = 0;
	visibleCoins = 0;
	
}

CoinManager::~CoinManager()
{

}
void CoinManager::inicializeCoins( int difficulty) { //Inicializamos el valor de las monedas en función a la dificultad.
	totalCoins== rand() % (30 * difficulty * 2) + (30 * difficulty); //Me coge valores random
																	 //para el valor del total de 
																	 //monedas que el jugador va a 
																	 //tener que consegur.

	visibleCoins = rand() % ((((3 * 100) / totalCoins) + ((13 * 100) / totalCoins))); //De ese totalCoins
																					  //solo me cojera de un 3%
	char empty{ '.' };																 //a un 13%,que serán monedas visibles.		
	char coin{ '$' };
	
	for (int i = 0; i < visibleCoins && Mapa.getContent(x, y) != empty && Mapa.getContent(x, y) != coin; i++) {

		x = rand() % Mapa.getMatrixSize();
		y = rand() % Mapa.getMatrixSize();

		if (Mapa.getContent(x,y)!=empty && Mapa.getContent(x,y)!=coin) {
			Mapa.newCellContent(x,y,coin);
		}
	}
}

void CoinManager::removeCoin() { //Cada vez que el jugador se encuentra esta moneda, el total de monedas disminuye 1

	totalCoins--;

}

void CoinManager::refillCoins() {
	if (visibleCoins==0) {
		char empty{ '.' };																 //a un 13%,que serán monedas visibles.		
		char coin{ '$' };

		for (int i = 0; i < visibleCoins && Mapa.getContent(x, y) != empty && Mapa.getContent(x, y) != coin; i++) {

			x = rand() % Mapa.getMatrixSize();
			y = rand() % Mapa.getMatrixSize();

			if (Mapa.getContent(x, y) != empty && Mapa.getContent(x, y) != coin) {
				Mapa.newCellContent(x, y, coin);
			}
		}
	}
}*/

