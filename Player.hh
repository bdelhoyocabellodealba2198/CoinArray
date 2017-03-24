#pragma once //Preguntar a Tona para qué es #pragma once.
#include "Header.hh"
class Map;
class CoinManager;

class Player
{
public:

	Player(Map &map, CoinManager &coins);

	~Player();

	void update(Input::Key keyPressed);

	int getPoints(); 

private:

	Map &myMap;
	
	CoinManager &myCoins;

	int positionX;

	int positionY;

	int playerPoints;

	char playerChar = '@';

	char emptyCell = '.';
};
