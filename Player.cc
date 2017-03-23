#include "Header.hh"
/*
Player::Player( Map&Mapa, CoinManager&CoinManager)
{
	char empty = '.';
	playerPoints = 0;
	do {
		positionX = rand() % Mapa.getMatrixSize();
		positionY = rand() % Mapa.getMatrixSize();
		
		if (Mapa.getContent(positionX, positionY) == empty)
		{
			Mapa.newCellContent(positionX, positionY, playerChar);
		}
	} while (Mapa.getContent(positionX, positionY) != empty);
}

Player::~Player()
{}

void Player::addPoints(Map&Mapa, Input::Key pointKey)
{
	switch(pointKey)
	{
	case Input::Key::D: if (Mapa.getContent(positionX + 1,positionY) == '$') playerPoints++;
		break;
	case Input::Key::A: if (Mapa.getContent(positionX - 1,positionY) == '$') playerPoints++;
		break;
	case Input::Key::W: if (Mapa.getContent(positionX,positionY - 1) == '$') playerPoints++;
		break;
	case Input::Key::S: if (Mapa.getContent(positionX,positionY + 1) == '$') playerPoints++;
		break;
	}
}

void Player::updatePosition(Map&Mapa,Input::Key movementKey)
{
	char emptyCell = ' . ';
	Mapa.newCellContent(positionX, positionY, emptyCell);
	switch (movementKey)
	{
	case Input::Key::D: Mapa.newCellContent(positionX + 1, positionY, playerChar);
	case Input::Key::A: Mapa.newCellContent(positionX - 1, positionY, playerChar);
	case Input::Key::W: Mapa.newCellContent(positionX, positionY - 1, playerChar);
	case Input::Key::S: Mapa.newCellContent(positionX, positionY + 1, playerChar);
//	case Input::Key::ENTER: Map.newCellContent(rand() % sqrt(Map.getMapSize), rand() % sqrt(Map.getMapSize), playerChar);
	//	case Input::Key::ESC: //FIN DEL GAME LOOP.
	default:
		break;
	}
}

int Player::getPoints()
{
	return playerPoints;
}*/