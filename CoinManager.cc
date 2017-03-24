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
	total_Coins = rand() % (30 * myMap.getMapSize() * 2) + (30 * myMap.getMapSize());

	int total_Coins1 = total_Coins * 0.03;
	int total_Coins2 = total_Coins * 0.13;

	visible_Coins = rand() % total_Coins1 + total_Coins2;
	
	for (int i = 0; i < visible_Coins && myMap.getContent(x, y) != emptyCell && myMap.getContent(x, y) != coin; i++)
	{
		x = rand() % myMap.getRows();
		y = rand() % myMap.getColumns();

		if (myMap.getContent(x, y) != emptyCell && myMap.getContent(x, y) != coin) 
		{
			myMap.newCellContent(x, y, coin);
		}
	}
}

void CoinManager::removeCoin() 
{
	total_Coins--;
}