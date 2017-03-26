#include "Header.hh"


int main()
{
	clock_t t_ini, t_fin;
	double secs;
	t_ini = clock();
	

	int playerChoice;
	bool wrongAnswer;
	int difficulty;
	do {
		std::cout << "/////////////////////////////////////////////////////////////" << std::endl;
		std::cout << " " << std::endl;
		std::cout << "                         COIN RACE                           " << std::endl;
		std::cout << " " << std::endl;
		std::cout << "/////////////////////////////////////////////////////////////" << std::endl;
		std::cout << " " << std::endl;

		std::cout << "Type 1, 2 or 3 for easy, medium or hard mode: ";
		std::cin >> playerChoice;
		wrongAnswer = false;
		

		switch (playerChoice)
		{
		case 1: std::cout << "You have chosen the easy mode. Wise choice...\n" << std::endl;
			difficulty = playerChoice;
			break;
		case 2: std::cout << "You have chosen the medium mode. Good luck!\n" << std::endl;
			difficulty = playerChoice;
			break;
		case 3: std::cout << "You have chosen the hard mode. You might regret, haha...\n" << std::endl;
			difficulty = playerChoice;
			break;
		default: std::cout << "That was either too easy or too hard...\n" << std::endl;
			difficulty = playerChoice;
			wrongAnswer = true;
			break;
		}
	} while (wrongAnswer == true);
	
	
	srand(time(nullptr));
	 
	int totalPoints;
	int max_time;
	totalPoints = rand() % (30 * difficulty * 2 - 30 * difficulty) + 30 * difficulty;

	if (totalPoints < 40) {
		max_time = 50;
	 }
	else if(totalPoints>=50){
		max_time = 70;
	}
	
	Input::Key keyPressed;

	Map A(difficulty);
	
	CoinManager Coins(A);

	Player player(A, Coins);
	
	system("cls");

	A.drawMap();
	do {
		keyPressed = Input::getKey();
		
		
		
		if (keyPressed != Input::Key::NONE) 
		{
			player.update(keyPressed);
			system("cls");
			A.drawMap();
			std::cout<< std::endl;
			std::cout << "totalPoints: " << totalPoints<<std::endl;
			std::cout << std::endl;
			std::cout << "Player points: " << player.getPoints();
		}

		
	} while (player.getPoints()<totalPoints&& keyPressed!= Input::Key::ESC);
	
	t_fin = clock();
	secs = (double)(t_fin - t_ini) / CLOCKS_PER_SEC; 

	if (secs>max_time) {

		std::cout << std::endl;
		std::cout << "/////////////////////////////////////////////////////////////" << std::endl;
		std::cout << " " << std::endl;
		std::cout << "                                                            " << std::endl;
		std::cout << "          **   **  ***  *   *   *    ***  **** ****           " << std::endl;
		std::cout << "            * *   *   * *   *   *   *   * ***  ***           " << std::endl;
		std::cout << "             *    *   * *   *   *   *   *    * ***           " << std::endl;
		std::cout << "             *     ***   * *    **** ***  ***  ****           " << std::endl;
		std::cout << " " << std::endl;
		std::cout << "/////////////////////////////////////////////////////////////" << std::endl;

	}
	else {
		std::cout << std::endl;
		std::cout << "/////////////////////////////////////////////////////////////" << std::endl;
		std::cout << " " << std::endl;
		std::cout << "                                                         " << std::endl;
		std::cout << "         **   **  ***  *   *  *       *  * *   *      " << std::endl;
		std::cout << "           * *   *   * *   *  *   *   *  * * * *      " << std::endl;
		std::cout << "            *    *   * *   *   * **  *   * *  **      " << std::endl;
		std::cout << "            *     ***   * *     *   *    * *   *      " << std::endl;
		std::cout << " " << std::endl;
		std::cout << "/////////////////////////////////////////////////////////////" << std::endl;

	}
	std::cout << std::endl;
	std::cout << "time: " << secs <<" sec."<<std::endl;
	
	std::cout << std::endl;
	std::cout << "/////////////////////////////////////////////////////////////" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "                        ****  * *  * ****                    " << std::endl;
	std::cout << "                        *     *  * * *    *                  " << std::endl;
	std::cout << "                        ****  *  * * *    *                  " << std::endl;
	std::cout << "                        *     *   ** *    *                  " << std::endl;
	std::cout << "                        ****  *    * ****                    " << std::endl;
	std::cout << " " << std::endl;
	std::cout << "/////////////////////////////////////////////////////////////" << std::endl;
	system("pause");
	return 0;
}