#include "Header.hh" 

CoinManager::CoinManager(Map &map) : myMap{map}
{
	total_Coins = 0;
	refillCoins();
	
}

CoinManager::~CoinManager()
{
}
void CoinManager::refillCoins() 
{
	total_Coins = (rand() % myMap.getMapSize()*0.13 - myMap.getMapSize()*0.03) + myMap.getMapSize()*0.03;
	
	for (int i = 0; i< total_Coins; i++)
	{
		do {

			x = rand() % myMap.getRows();
			y = rand() % myMap.getColumns();

		} while (myMap.getContent(x, y) != emptyCell);
	
			myMap.newCellContent(x, y, coin);
	}
}

void CoinManager::removeCoin() 
{
	total_Coins--;
	if (total_Coins==0) {
		refillCoins();
	}
}