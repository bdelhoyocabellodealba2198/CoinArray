#include "Header.hh"

int difficultyChoice()
{
	int playerChoice;
	bool wrongAnswer;
	
	do {
		std::cout << "Type 1, 2 or 3 for easy, medium or hard mode: ";
		std::cin >> playerChoice;
		wrongAnswer = false;

		switch (playerChoice)
		{
		case 1: std::cout << "You have chosen the easy mode. Wise choice...\n" << std::endl;
			break;
		case 2: std::cout << "You have chosen the medium mode. Good luck!\n" << std::endl;
			break;
		case 3: std::cout << "You have chosen the hard mode. You might regret, haha...\n" << std::endl;
			break;
		default: std::cout << "That was either too easy or too hard...\n" << std::endl;
			wrongAnswer = true;
			break;
		}
	} while (wrongAnswer == true);
	return playerChoice;
}

int main()
{
	//Input::Key MyKey;
	srand(time(nullptr));
	int difficulty;
	difficulty = difficultyChoice();

	Map A(difficulty);//Objeto sobrecagado de la clase Map
	A.drawMap(); //Muestra el mapa A en pantalla. 

	//Player player(A,MyKey);//Objeto sobrecargado de la clase player
	//player.addPoints(A);

	//CoinManager Coins(A);//Objeto3 sobregado de la clase Coin
	//Coins.inicializeCoins(difficulty);

	return 0;
}