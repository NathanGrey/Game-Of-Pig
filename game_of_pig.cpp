#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;     
void showExitMenu()
{
	cout << "\n\tExiting the game.\n\n\t";
	system("pause");
}
int RollSixSidedDie()
{
	int Roll = rand() % 6 + 1;
	return Roll;
}

int PlayerTurn(int& PlayerTotalScore)
	{
		int CurrentScore = 0; 
		int Roll;
		char PlayerChoice;


		cout << "\tYour total score is " << PlayerTotalScore << ".\n";
		cout << "\tPress R to roll again or S to skip.\n";
		cin >> PlayerChoice;

		while (PlayerChoice == 'r')
		{

			srand (time(NULL));
			Roll = RollSixSidedDie();

			if (Roll == 1)
			{
				cout << "\tYou rolled a 1. Computer's turn.\n";
				break;
			}
			else
			{
				CurrentScore += Roll;
				cout << "\tYou rolled a " << Roll << ". Your Score is " << CurrentScore << ".\n";
				cout << "\tPress R to roll again or s to skip.\n";
				cin >> PlayerChoice;
			}

		}
		while (PlayerChoice == 's')
		{
			PlayerTotalScore += CurrentScore;
			break;
		}
		
		return PlayerTotalScore;
	}

int ComputerTurn(int& ComputerTotalScore)
{
	int CurrentScore = 0;
	int Roll;

	cout << "\tThe Computer has a total score of " << ComputerTotalScore << ".\n";
	while ((CurrentScore <= 20) && (CurrentScore !=1))
	{
		Roll = RollSixSidedDie();
		if (Roll == 1)
		{
			cout << "\tThe Computer rolled a 1. Player's turn.\n\n";
			break;
		}
		else
		{			
			CurrentScore += Roll;
			cout << "\tThe Computer rolled a " << Roll << ". The Computer's score is " << CurrentScore << ".\n";
		}
	if (CurrentScore >= 20)
	{
		ComputerTotalScore +=CurrentScore;
		cout << "\tThe Computer skipped. The Computer's Total Score is " << ComputerTotalScore << ".\n\n";
	}

	}
	return ComputerTotalScore;
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



int SinglePlayerMode()
{
	int Player, Computer;
	const int WinningScore = 100;
	srand(time(NULL));

	Player = rand() % 100 + 1;
	Computer = rand() % 100 + 1;
	
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

    
    int PlayerTotalScore = 0, ComputerTotalScore = 0;

   do
	{
		PlayerTotalScore = PlayerTurn(PlayerTotalScore); //add the score from a new turn to the running total
		cout << "\tYour total score so far is " << PlayerTotalScore << ".\n";
		if(PlayerTotalScore >= 100)
		{
			cout << "You Win!";
			return 0;
		}
		ComputerTotalScore = ComputerTurn(ComputerTotalScore); //add the score from a new turn to the running total
		cout << "\tComputer total score so far is " << ComputerTotalScore << ".\n";
		if(ComputerTotalScore >= 100)
		{
			cout << "Computer Wins!";
			return 0;
		}
	}
	while(PlayerTotalScore < 100 && ComputerTotalScore < 100);
}

	/*if (Player > Computer)
	{
		cout << "\tPlayer will roll first!\n";
		PlayerTurn();
	}
	else if (Computer > Player)
		{
			cout << "\tComputer will roll first!\n";
			ComputerTurn();
		}
	else if (Player == Computer)
		{
			cout << "\tIt's a tie! Let's roll again.\n";
			VSMode();
		}
}*/
int main()
{
    showMainMenu();

    int GameModeChoice;
    srand(time(NULL));
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
