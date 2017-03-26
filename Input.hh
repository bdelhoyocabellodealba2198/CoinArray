//C�DIGO DADO EN LA PR�CTICA PARA EL CONTROL DE MOVIMIENTO DEL PLAYER
#pragma once
#include <conio.h>

namespace Input
{
	//REPRESENTA CADA TECLA QUE EL JUGADOR PUEDE USAR
	enum class Key
	{
		NONE, W, A, S, D, ENTER, ESC
	};

	//DEVUELVE LA TECLA QUE HA SIDO PRESIONADA
	static Key getKey()
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 87: case 119:
				return Key::W; // w and W
			case 65: case 97:
				return Key::A; // a and A
			case 83: case 115:
				return Key::S; // s and S
			case 68: case 100:
				return Key::D; // d and D
			case 13:
				return Key::ENTER; // carriage return
			case 27:
				return Key::ESC; // escape
			}
		}
		return Key::NONE;
	}
};