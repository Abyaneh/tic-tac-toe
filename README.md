Tic-Tac-Toe Game
Table of Contents
Introduction
Features
Game Rules
Code Structure
How to Play
Video Demonstration
How to Run the Project
Contributing
License
Introduction
This project is a C++ implementation of the classic Tic-Tac-Toe game. The game is designed for two players who take turns to input their moves, attempting to place their marks ('X' or 'O') on a 4x4 grid. The first player to get three marks in a row, either horizontally, vertically, or diagonally, wins the game.

Features
Turn-based gameplay: Two players compete by taking alternate turns.
Input validation: Duplicate inputs are rejected with a prompt for a new selection.
Dynamic game board: The grid updates in real-time after each player’s move.
Win detection: The game checks for a winner after every move.
Error handling: Input validation ensures players cannot select an already-used cell.
Game Rules
Players play on a 4x4 grid.
Player 1 uses 'X' and Player 2 uses 'O'.
Players take turns selecting a number from 1 to 16 that corresponds to a position on the grid.
If a player selects a number that has already been chosen, an error is displayed, and they must choose again.
The game checks for three consecutive symbols in any direction (horizontal, vertical, diagonal).
The game ends when one player wins, or all grid spaces are filled.
Code Structure
game.cpp: This is the main code file where the logic of the game is implemented.
Functions:
check_winner(): Checks for a win condition (three in a row).
display_grid(): Displays the current state of the game grid.
is_duplicate(): Ensures the player's selected number is valid and not previously chosen.
play_game(): Controls the flow of the game, alternating between players and checking for victory conditions.
How to Play
Clone the repository:
bash
Copy code
git clone https://github.com/Abyaneh/Tic-Tac-Toe.git
Navigate to the project directory:
bash
Copy code
cd Tic-Tac-Toe
Compile the C++ code:
bash
Copy code
g++ game.cpp -o game
Run the executable:
bash
Copy code
./game
Follow the instructions to play the game by entering numbers corresponding to grid positions.
Video Demonstration
Click here to watch a video demonstration of the Tic-Tac-Toe game in action.

How to Run the Project
Make sure you have a C++ compiler installed.
Compile the provided code:
bash
Copy code
g++ game.cpp -o game
Run the game:
bash
Copy code
./game
Contributing
Contributions to this project are welcome! Feel free to fork the repository and submit a pull request with your improvements or fixes.

License
This project is licensed under the MIT License. See the LICENSE file for more details.
