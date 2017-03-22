#include "Header.hh"

Player::Player(class Map&Map)
{
	playerPoints = 0;
	do {
		positionX = rand() % Map.getMatrixSize;
		positionY = rand() % Map.getMatrixSize;
		
		if (Map.getContent(positionX, positionY) == '.')
		{
			Map.newCellContent(positionX, positionY, playerChar);
		}
	} while (Map.getContent(positionX, positionY) != '.');
}

Player::~Player()
{}

void Player::addPoints(class Map&Map, Input::Key pointKey)
{
	switch(pointKey)
	{
	case Input::Key::D: if (Map.getContent[positionX + 1][positionY] == '$') playerPoints++;
		break;
	case Input::Key::A: if (Map.getContent[positionX - 1][positionY] == '$') playerPoints++;
		break;
	case Input::Key::W: if (Map.getContent[positionX][positionY - 1] == '$') playerPoints++;
		break;
	case Input::Key::S: if (Map.getContent[positionX][positionY + 1] == '$') playerPoints++;
		break;
	}
}

void Player::updatePosition(class Map&Map, Input::Key movementKey) 
{
	char emptyCell = ' . ';
	Map.newCellContent(positionX, positionY, emptyCell);
	switch (movementKey)
	{
	case Input::Key::D: Map.newCellContent(positionX + 1, positionY, playerChar);
	case Input::Key::A: Map.newCellContent(positionX - 1, positionY, playerChar);
	case Input::Key::W: Map.newCellContent(positionX, positionY - 1, playerChar);
	case Input::Key::S: Map.newCellContent(positionX, positionY + 1, playerChar);
//	case Input::Key::ENTER: Map.newCellContent(rand() % sqrt(Map.getMapSize), rand() % sqrt(Map.getMapSize), playerChar);
	//	case Input::Key::ESC: //FIN DEL GAME LOOP.
	default:
		break;
	}
}

int Player::getPoints()
{
	return playerPoints;
}