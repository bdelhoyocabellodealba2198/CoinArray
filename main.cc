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
	srand(time(nullptr));
	int difficulty;
	difficulty = difficultyChoice();
	
	Map A(difficulty);
	A.drawMap();

	return 0;
}