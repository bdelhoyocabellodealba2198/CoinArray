#pragma once //Preguntar a Tona para qué es #pragma once.
#include "Header.hh"
class Map;

class CoinManager
{
public:
	CoinManager(Map &Map);//Constructor de monedas

	~CoinManager();

	void refillCoins();

	void removeCoin();
	
private:
	Map &myMap;
	int visible_Coins;
	int total_Coins;
	int x;
	int y;
	char coin{ '$' };
	char emptyCell{ '.' };
	char playerChar{'@'};
};