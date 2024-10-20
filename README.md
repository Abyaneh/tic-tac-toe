

# Tic-Tac-Toe Game

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Game Rules](#game-rules)
- [Code Structure](#code-structure)
- [How to Play](#how-to-play)
- [Contributing](#contributing)
- [License](#license)

## Introduction
This project is a C++ implementation of the classic Tic-Tac-Toe game. The game is designed for two players who take turns to input their moves, attempting to place their marks ('X' or 'O') on a 4x4 grid. The first player to get three marks in a row, either horizontally, vertically, or diagonally, wins the game.

![Demonstration](https://github.com/Abyaneh/tic-tac-toe/blob/main/picture/Demonstration.jpg)


## Features
- **Turn-based gameplay**: Two players compete by taking alternate turns.
- **Input validation**: Duplicate inputs are rejected with a prompt for a new selection.
- **Dynamic game board**: The grid updates in real-time after each player’s move.
- **Win detection**: The game checks for a winner after every move.
- **Error handling**: Input validation ensures players cannot select an already-used cell.

## Game Rules
1. Players play on a 4x4 grid.
2. Player 1 uses 'X' and Player 2 uses 'O'.
3. Players take turns selecting a number from 1 to 16 that corresponds to a position on the grid.
4. If a player selects a number that has already been chosen, an error is displayed, and they must choose again.
5. The game checks for three consecutive symbols in any direction (horizontal, vertical, diagonal).
6. The game ends when one player wins, or all grid spaces are filled.

## Code Structure
- **game.cpp**: This is the main code file where the logic of the game is implemented.
  - **Functions**:
    - `check_winner()`: Checks for a win condition (three in a row).
    - `display_grid()`: Displays the current state of the game grid.
    - `is_duplicate()`: Ensures the player's selected number is valid and not previously chosen.
    - `play_game()`: Controls the flow of the game, alternating between players and checking for victory conditions.

## How to Play
1. Clone the repository:
   ```bash
   git clone https://github.com/Abyaneh/Tic-Tac-Toe.git
   ```
2. Navigate to the project directory:
   ```bash
   cd Tic-Tac-Toe
   ```
3. Compile the C++ code:
   ```bash
   g++ game.cpp -o game
   ```
4. Run the executable:
   ```bash
   ./game
   ```
5. Follow the instructions to play the game by entering numbers corresponding to grid positions.

## Contributing
Contributions to this project are welcome! Feel free to fork the repository and submit a pull request with your improvements or fixes.

## License
This project is licensed under the MIT License - see the [LICENSE](https://github.com/Abyaneh/rotten_and_fresh/blob/main/LICENSE) file for details.

---

