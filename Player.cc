#include "Header.hh"
/*
Player::Player(Map &map, CoinManager &coins) :myMap{ map }, myCoins{ coins }
{
	char empty = '.';

	playerPoints = 0;
	do {
		positionX = rand() % myMap.getRows();
		positionY = rand() % myMap.getColumns();
		
		if (myMap.getContent(positionX, positionY) == empty)
		{
			myMap.newCellContent(positionX, positionY, playerChar);
		}
	} while (myMap.getContent(positionX, positionY) != empty);
}

Player::~Player()
{}

void Player::update(Input::Key keyPressed)
{
	char emptyCell = ' . ';
	myMap.newCellContent(positionX, positionY, emptyCell);

	switch(keyPressed)
	{
	case Input::Key::D: if (myMap.getContent(positionX + 1,positionY) == '$') playerPoints++;
		myCoins.removeCoin;
		myMap.newCellContent(positionX + 1, positionY, playerChar);
		break;
	case Input::Key::A: if (myMap.getContent(positionX - 1,positionY) == '$') playerPoints++;
		myCoins.removeCoin;
		myMap.newCellContent(positionX - 1, positionY, playerChar);
		break;
	case Input::Key::W: if (myMap.getContent(positionX,positionY - 1) == '$') playerPoints++;
		myCoins.removeCoin;
		myMap.newCellContent(positionX, positionY - 1, playerChar);
		break;
	case Input::Key::S: if (myMap.getContent(positionX,positionY + 1) == '$') playerPoints++;
		myCoins.removeCoin;
		myMap.newCellContent(positionX, positionY + 1, playerChar);
		break;
	default:
		break;
	}
}

int Player::getPoints()
{
	return playerPoints;
}
*/