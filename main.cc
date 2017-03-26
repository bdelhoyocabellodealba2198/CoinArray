#include "Header.hh"

int main()
{
	clock_t t_ini, t_fin;
	double secs;	

	int playerChoice;
	bool wrongAnswer;
	int difficulty;

	std::cout << "/////////////////////////////////////////////////////////////" << std::endl;
	std::cout << std::endl;
	std::cout << "                         COIN RACE                           " << std::endl;
	std::cout << std::endl;
	std::cout << "/////////////////////////////////////////////////////////////" << std::endl;
	std::cout << std::endl;
	std::cout << "Type 1, 2 or 3 for easy, medium or hard mode: ";

	do {
		std::cin >> playerChoice;
		wrongAnswer = false;
		std::cout << std::endl;
		//ELECCIÓN DE LA DIFICULTAD
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
		default: std::cout << "That was either too easy or too hard... Try typing a number among the range of difficulty again: ";
			difficulty = playerChoice;
			wrongAnswer = true;
			break;
		}
	} while (wrongAnswer == true);

	t_ini = clock();
	
	srand(time(nullptr));
	 
	int totalPoints;
	int max_time;

	totalPoints = rand() % (30 * difficulty * 2 - 30 * difficulty) + 30 * difficulty;
	
	//TIMEPO QUE TIENES SEGÚN LAS MONEDAS QUE SE HAYAN GENERADO
	if (totalPoints < 40) 
	{
		max_time = 50;
	 }
	else if(totalPoints >= 40)
	{
		max_time = 70;
	}
	
	Input::Key keyPressed;

	Map A(difficulty);
	
	CoinManager Coins(A);

	Player player(A, Coins);
	
	system("cls");

	A.drawMap();

	//GAME LOOP
	do {
		keyPressed = Input::getKey();
		
		if (keyPressed != Input::Key::NONE)
		{
			player.update(keyPressed);
			system("cls");
			A.drawMap();
			std::cout << std::endl;
			std::cout << "Total points: " << totalPoints << std::endl;
			std::cout << std::endl;
			std::cout << "Player points: " << player.getPoints();
			std::cout << std::endl;
		}	
	} while (player.getPoints()<totalPoints&& keyPressed!= Input::Key::ESC);
	
	t_fin = clock();
	secs = (double)(t_fin - t_ini) / CLOCKS_PER_SEC; 

	//RESULTADO SI LO LOGRAS DENTRO DEL TIEMPO
	if (secs > max_time) 
	{
		std::cout << std::endl;
		std::cout << "/////////////////////////////////////////////////////////////" << std::endl;
		std::cout << std::endl;
		std::cout << "															   " << std::endl;
		std::cout << "          **   **  ***  *   *   *    ***  **** ****          " << std::endl;
		std::cout << "            * *   *   * *   *   *   *   * ***  ***           " << std::endl;
		std::cout << "             *    *   * *   *   *   *   *    * ***           " << std::endl;
		std::cout << "             *     ***   * *    **** ***  ***  ****          " << std::endl;
		std::cout << std::endl;
		std::cout << "/////////////////////////////////////////////////////////////" << std::endl;
	}
	else 
	{//RESULTADO SI NO LO LOGRAS DENTRO DEL TIEMPO
		std::cout << std::endl;
		std::cout << "/////////////////////////////////////////////////////////////" << std::endl;
		std::cout << std::endl;
		std::cout << "                                                         " << std::endl;
		std::cout << "         **   **  ***  *   *  *       *  * *   *         " << std::endl;
		std::cout << "           * *   *   * *   *  *   *   *  * * * *         " << std::endl;
		std::cout << "            *    *   * *   *   * **  *   * *  **         " << std::endl;
		std::cout << "            *     ***   * *     *   *    * *   *         " << std::endl;
		std::cout << std::endl;
		std::cout << "/////////////////////////////////////////////////////////////" << std::endl;
	}

	std::cout << std::endl;

	//TIEMPO TOTAL TRANSCURRIDO DESDE EL INICIO DEL JUEGO
	std::cout << "Time: " << secs <<" seconds."<<std::endl;
	
	//IMPRESIÓN POR PANTALLA CUANDO TERMINA EL JUEGO
	std::cout << std::endl;
	std::cout << "/////////////////////////////////////////////////////////////" << std::endl;
	std::cout << std::endl;
	std::cout << "                        ****  * *  * ****                    " << std::endl;
	std::cout << "                        *     *  * * *    *                  " << std::endl;
	std::cout << "                        ****  *  * * *    *                  " << std::endl;
	std::cout << "                        *     *   ** *    *                  " << std::endl;
	std::cout << "                        ****  *    * ****                    " << std::endl;
	std::cout << std::endl;
	std::cout << "/////////////////////////////////////////////////////////////" << std::endl;
	std::cout << std::endl;

	//"PULSA UNA TECLA PARA CONTINUAR"
	system("pause");
	
	return 0;
}