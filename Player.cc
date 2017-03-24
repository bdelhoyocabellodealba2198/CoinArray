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

	switch (keyPressed)
	{

	case Input::Key::D:

		if (positionY < myMap.getColumns()-1)
		{
			positionY++;

			if (myMap.getContent(positionX, positionY) == '$')
			{
				playerPoints++;
				myCoins.removeCoin();

			}
		}
		break;

	case Input::Key::A:

		if (positionY > 0)
		{
			positionY--;

			if (myMap.getContent(positionX, positionY) == '$')
			{
				playerPoints++;
				myCoins.removeCoin();
			}
		}
		break;

	case Input::Key::W:

		if (positionX > 0)
		{
			positionX--;

			if (myMap.getContent(positionX, positionY) == '$')
			{
				playerPoints++;
				myCoins.removeCoin();
			}
		}
		break;

	case Input::Key::S:

		if (positionX < myMap.getRows()-1)
		{
			positionX++;

			if (myMap.getContent(positionX, positionY) == '$')
			{
				playerPoints++;
				myCoins.removeCoin();
			}
		}
		break;
	}
	myMap.newCellContent(positionX, positionY, playerChar);

}

int Player::getPoints()
{
	return playerPoints;
}