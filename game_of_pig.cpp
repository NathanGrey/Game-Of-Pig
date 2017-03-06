#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;     

void showMainMenu()
{
	cout << "\n**********************************************************************\n"
		"\tWelcome to the Game of Pig! \n"
		"********************************************************************** \n"
		"\tGame Modes:\n"
		"\t1. Single Player Bot Battles\n"
		"\t2. VS Mode\n"
		"\t3. Exit\n";
}

void SinglePlayerMode()
{
	int Player1, Player2;
	srand(time(NULL));
	Player1 = rand() % 2 + 1;
	Player2 = rand() % 2 + 1;

	cout << "\n**********************************************************************\n"
		"\tHow To Play \n"
		"********************************************************************** \n"
		"\tRoll:\n"
		"\t-If the player rolls a one, their turn ends and they earn a score of zero for the turn.\n"
		"\t-If the player rolls two through six, the number is added to the player's turn total and the player's turn continues.\n"
		"\t-The player can keep rolling as long as it is still their turn.\n"
		"\tBank:\n"
		"\t- The turn's total score is added to the player's total score. Then their turn ends.\n";
	cout << "\tPress Enter to determine the player order.\n";

	if (Player1 > Player2)
	{
		cout << "\tPlayer1 will roll first!";
	}
	else if (Player2 > Player1)
	{
		cout << "\tPlayer2 will roll first!";
	}
}

int RollSixSidedDie()
{
	return rand() % 6 + 1;
}


void VSMode()
{
	int Player1, Player2;
	srand(time(NULL));
	Player1 = rand() % 100 + 1;
	Player2 = rand() % 100 + 1;
	
	cout << "\n**********************************************************************\n"
		"\tHow To Play \n"
		"********************************************************************** \n"
		"\tRoll:\n"
		"\t-If the player rolls a one, their turn ends and they earn a score of zero for the turn.\n"
		"\t-If the player rolls two through six, the number is added to the player's turn total and the player's turn continues.\n"
		"\t-The player can keep rolling as long as it is still their turn.\n"
		"\tBank:\n"
		"\t- The turn's total score is added to the player's total score. Then their turn ends.\n\n";
	cout << "\tPress Enter to determine the Player order.\n";
	cin.get();
    cin.ignore();

	if (Player1 > Player2)
	{
		cout << "\tPlayer1 will roll first!\n";
		cout << "\tPress Enter to roll.\n";
		cin.get();
    	cin.ignore();
    	cout << "\tPlayer 1 rolled a " << RollSixSidedDie();
    	cout << "\n\tPlayer2's turn.\n";
    	cout << "\tPress Enter to roll.\n";
    	cin.get();
    	cin.ignore();
    	cout << "\tPlayer 2 rolled a " << RollSixSidedDie();
	}
	else if (Player2 > Player1)
		{
			cout << "\tPlayer2 will roll first!\n";
			cout << "\tPress Enter to roll.\n";
			cin.get();
    		cin.ignore();
    		cout << "\tPlayer 2 rolled a " << RollSixSidedDie();
		}
	else if (Player1 == Player2)
		{
			cout << "\tIt's a tie! Let's roll again.\n";
			VSMode();
		}

}

void showExitMenu()
{

	cout << "\n\tExiting the game.\n\n\t";
	system("pause");

}



int main()
{
    showMainMenu();

  	//srand(time(NULL));
	//int diceRoll = rand() % 20 + 1;

    int GameModeChoice;
    srand(time(NULL));
	int diceRoll = rand() % 6 + 1;
    cout << "\n\tChoose a Game Mode:";
    cin >> GameModeChoice;
    switch (GameModeChoice)
    {
    	case 1: SinglePlayerMode();
    			break;

    	case 2: VSMode();
    			break;

    	case 3: showExitMenu();
    			break;

    	default:  cout << "\n\tInvalid choice. Returning to Main Menu.\n\n\t";
				  showMainMenu();
			      cout << "\n\tChoose a Game Mode:";
			      cin >> GameModeChoice;
				  break;
    }
}
