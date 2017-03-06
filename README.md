# Game-Of-Pig
Description
You will be implementing the Game of Pig. Game of Pig is a simple two-player game based on dice rolls. The rules are as follows.

During each turn, the player chooses:

Roll:
If the player rolls a one, their turn ends and they earn a score of zero for the turn.
If the player rolls two through six, the number is added to the player's turn total and the player's turn continues.
The player can keep rolling as long as it is still their turn.
Bank: The turn's total score is added to the player's total score. Then their turn ends.
The first player to reach 100 wins the game.

Specifications:

The game needs to prompt the user with the rules when the game first starts (see the rules outlined above).
The play order should be decided at random, since first player is at an advantage.
During each turn, it must be clear which player's turn it is. For example:
player 1> roll

Player 1 rolled a 1.

Player 2's turn.

player 2> roll

Player 2 rolled a 3.

Player 2's turn total: 3

player 2> bank

Each action needs to be stated to the user. If the user chooses roll then the output of the dice roll needs to be printed to the user.
player 2> roll

Player 2 rolled 6.

Each player's turn total should be displayed after each action.
player 2> roll

Player 2 rolled a 3.

Player 2's turn total: 3

player 2>

After each turn ends, both player's total scores should be displayed.
When one of the player's wins, a clear message should be printed to the players and the game should exit.
Requirements:

Create a Visual Studio project. Naming convention for project: [yourlastname]_5
Create game_of_pig.cpp file in the new project.
The project must build and compile without any errors.
It must meet the runtime specifications outlined above.
You should use functions to logically organize code and maximize code reuse.
You should use a loop to handle player input.
You should also use rand() to handle six-sided dice rolls.
The project must support two players.
Make sure to use proper code formatting and style, as well as correct variable naming practices.
Extra Credit:

Create a simple AI that will act as the second player.
This should be presented in a different game mode when the player starts the program.
Welcome to the Game of Pig!

Game Modes:

    1)  Single Player bot battle

    2)  VS mode

Choose your play mode:
