#pragma once //Preguntar a Tona para qu� es #pragma once.
#include "Header.hh"

class Player
{
public:
	Player(class Map&Map);

	~Player();

	void addPoints(class Map&Map, Input::Key pointKey);

	int getPoints();

	void updatePosition(class Map&Map, Input::Key movementKey);

private:
	int positionX;
	int positionY;
	int playerPoints;
	char playerChar = '@';
};