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
		"\t2. VS Mode\n\n"
		"\t3. How To Play\n"
		"\t4. Exit\n";
}
void SinglePlayerMode()
{

}

void VSMode()
{

}
void showHowToPLayMenu()
{
	cout << "\n**********************************************************************\n"
		"\tHow To Play \n"
		"********************************************************************** \n"
		"\tRoll:\n"
		"\t-If the player rolls a one, their turn ends and they earn a score of zero for the turn.\n"
		"\t-If the player rolls two through six, the number is added to the player's turn total and the player's turn continues.\n"
		"\t-The player can keep rolling as long as it is still their turn.\n"
		"\tBank:\n"
		"\t- The turn's total score is added to the player's total score. Then their turn ends.\n"
		"\tPress Any Key to Return to the Main Menu\n";
}

void showExitMenu()
{

	cout << "\n\tExiting the game.\n\n\t";
	system("pause");

}

int main()
{
    showMainMenu();

    int GameModeChoice;
    cout << "\n\tChoose a Game Mode:";
    cin >> GameModeChoice;
    switch (GameModeChoice)
    {
    	case 1: SinglePlayerMode();
    			break;

    	case 2: VSMode();
    			break;

    	case 3: showHowToPLayMenu();
    			
    			showMainMenu();
    			int GameModeChoice;
    cout << "\n\tChoose a Game Mode:";
    cin >> GameModeChoice;
    			break;

    	case 4: showExitMenu();
    			break;

    	default:  cout << "\n\tInvalid choice. Returning to Main Menu.\n\n\t";
				  showMainMenu();
				  break;
    }
}
