#include "Header.hh"

Player::Player(Map &map, CoinManager &coins) : myMap{ map }, myCoins{ coins }
{
	playerPoints = 0;
	bool playerDone = false;

	do {
		positionX = rand() % myMap.getRows();
		positionY = rand() % myMap.getColumns();

		if (myMap.getContent(positionX, positionY) != coinChar)
		{
			myMap.newCellContent(positionX, positionY, playerChar);
			playerDone = true;
		}
	} while (playerDone == false);
}

Player::~Player() {

}
void Player::update(Input::Key keyPressed)
{
	myMap.newCellContent(positionX, positionY, emptyCell);

	switch(keyPressed)
	{
	case Input::Key::D: if (myMap.getContent(positionX + 1,positionY) == '$') playerPoints++;
		myCoins.removeCoin();
		myMap.newCellContent(positionX + 1, positionY, playerChar);
		break;
	case Input::Key::A: if (myMap.getContent(positionX - 1,positionY) == '$') playerPoints++;
		myCoins.removeCoin();
		myMap.newCellContent(positionX - 1, positionY, playerChar);
		break;
	case Input::Key::W: if (myMap.getContent(positionX,positionY - 1) == '$') playerPoints++;
		myCoins.removeCoin();
		myMap.newCellContent(positionX, positionY - 1, playerChar);
		break;
	case Input::Key::S: if (myMap.getContent(positionX,positionY + 1) == '$') playerPoints++;
		myCoins.removeCoin();
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