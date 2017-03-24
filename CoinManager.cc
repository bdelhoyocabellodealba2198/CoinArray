#include "Header.hh" 

CoinManager::CoinManager(Map &map) : myMap{map}
{
	total_Coins = 0;
	visible_Coins = 0;
	
}

CoinManager::~CoinManager()
{
}
void CoinManager::refillCoins() 
{
	//total_Coins = rand() % (5 * myMap.getMapSize() * 2) + (5* myMap.getMapSize());
	total_Coins = rand() % (5 * myMap.getMapSize() * 2);
	int total_Coins1 = total_Coins * 0.03;
	//int total_Coins2 = total_Coins * 0.13;

	visible_Coins = rand()%total_Coins1;
	
	for (int i = 0; i< visible_Coins; i++)
	{
		
		x = rand() % myMap.getRows();
		y = rand() % myMap.getColumns();

		if (myMap.getContent(x, y)!= playerChar && myMap.getContent(x, y) != coin) 
		{
			myMap.newCellContent(x, y, coin);
		}
	}
}

void CoinManager::removeCoin() 
{
	total_Coins--;
}