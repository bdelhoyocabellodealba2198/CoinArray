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
	total_Coins = (rand() % static_cast<int>(ceil(static_cast<double>(myMap.getMapSize()*0.13f - static_cast<double>(myMap.getMapSize()*0.03f)))) + static_cast<int>(ceil(static_cast<double>(myMap.getMapSize()*0.03f))));
	
		for (int i = 0; i < total_Coins; i++)
		{
			do {
				x = rand() % myMap.getRows();
				y = rand() % myMap.getColumns();

			} while (myMap.getContent(x, y) != emptyCell);

			myMap.newCellContent(x,y, coin);
		}
}

void CoinManager::removeCoin() 
{
	total_Coins--;
	if (total_Coins==0) 
	{
		refillCoins();
	}
}