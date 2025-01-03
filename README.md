# Tic-Tac-Toe (XO)

## Overview
This repository contains a simple implementation of the classic Tic-Tac-Toe (XO) game in C++. The game supports two modes:
- **1 VS 1 Mode**: Two players can play against each other on the same system.
- **1 VS Computer Mode**: A single player competes against a computer opponent with basic AI.

## Features
- **Interactive Gameplay**:
  - A 3x3 game board that updates dynamically after each move.
  - A guide grid to help players map positions (1-9) to the board.

- **Modes**:
  - Play with another person or challenge the computer.

- **Win Detection**:
  - The game checks for winning conditions after every move (rows, columns, or diagonals).
  - If no valid moves remain, the game ends in a draw.

- **Computer AI**:
  - Attempts to win if possible.
  - Blocks the player from winning.
  - Chooses a random move if neither winning nor blocking is possible.

## Gameplay Instructions
1. **Compilation**:
   Compile the program using a C++ compiler, such as g++:
   ```bash
   g++ xo.cpp -o xo
   ```

2. **Running the Game**:
   Execute the compiled program:
   ```bash
   ./xo
   ```

3. **Game Modes**:
   - Enter `1` for 1 VS 1 mode (Player 1 vs Player 2).
   - Enter `2` for 1 VS Computer mode.

4. **Making a Move**:
   - Players will be prompted to enter a number (1-9) corresponding to their desired cell on the board.
   - Invalid inputs or moves to already-occupied cells are rejected.

5. **Game End**:
   - The game ends when either player wins or there are no remaining valid moves (draw).

## Example
### Initial Board:
```
 | | |
------
 | | |
------
 | | |
```
### Guide:
```
1|2|3|
------
4|5|6|
------
7|8|9|
```
### Player 1's Move:
```
X| | |
------
 | | |
------
 | | |
```

## Code Overview
The main components of the code:
- **`game` Function**: Displays the current state of the game board.
- **`play` Function**: Updates and displays the board after each move.
- **`check` & `check_computer` Functions**: Evaluate potential winning moves for the player and computer.
- **`win1` & `win2` Functions**: Check if Player 1 or Player 2/Computer has won.
- **`main` Function**: Handles game flow and user input.

## Future Improvements
- Enhance the AI using advanced strategies like the Minimax algorithm.
- Add a graphical user interface (GUI).
- Include better error handling and user feedback.
- Provide an option to restart the game without exiting.

## License
This project is open-source and available under the MIT License.

---
Enjoy playing Tic-Tac-Toe!
