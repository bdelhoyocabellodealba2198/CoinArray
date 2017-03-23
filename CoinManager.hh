#pragma once //Preguntar a Tona para qué es #pragma once.
#include "Header.hh"

class CoinManager
{
public:
	CoinManager(class Map&Map);//Constructor de monedas
	~CoinManager();

	void inicializeCoins(int dificulty);//Nose si hace falta porque ya lo hacemos en el constructor.
	void removeCoin(void); //Método que resta una moneda a Coins cada vez que
										//El jugador entra en contacto con una moneda. 
	void refillCoins(void);//Método que rellena la array una vez el jugador ha conseguido todas 
						//monedas visibles en el mapa. 
private:
	Map Mapa; //referencia de tipo Map
	int totalCoins; //Cantidad de monedas totales del 
	int visibleCoins;
	int x;     
	int y;
};
