# **Tic-Tac-Toe Game**  

This project is a **dynamic Tic-Tac-Toe game** implemented in **C++**, allowing players to choose a custom board size and play against each other in a turn-based manner. It includes **win detection, draw conditions, and an interactive gameplay experience.**  

________________________________________________________  

## **Features**  

✅ **Custom Grid Size** – Players can define the board size (minimum 3x3).  

✅ **Turn-Based Gameplay** – Players take turns making moves.  

✅ **Win Checking System** – Automatically detects row, column, and diagonal wins.  

✅ **Draw Condition** – Identifies when the board is full with no winner.  

✅ **Random Starting Player** – The game randomly selects which player goes first.  

✅ **Command Line Interface** – Simple text-based interaction for easy play.  

________________________________________________________  

## **How to Play?**  

1. **Run the program** and enter the desired board size.  

2. The game randomly selects the **starting player** (`X` or `O`).  

3. Players **take turns entering row and column numbers** to place their marks.  

4. The game continues until a player wins or the board is full (**resulting in a draw**).  

5. The winner or draw message is displayed at the end.  

________________________________________________________  

## **Game Controls**  

- Enter a **row number** and **column number** to place your mark.  

- The board updates dynamically after each move.  

- If an **invalid move** is entered (out of bounds or already occupied), the player is asked to retry.  

________________________________________________________  

## **Example Gameplay**  

```plaintext
Enter the size of the Tic-Tac-Toe grid (n): 3  

  0 1 2  
0 _ _ _  
1 _ _ _  
2 _ _ _  

Player X, enter your move (row and column): 1 1  

  0 1 2  
0 _ _ _  
1 _ X _  
2 _ _ _  
```

________________________________________________________  

## **Win Conditions**  

A player wins if they successfully place their marks (`X` or `O`) in:  

- A **complete row**  

- A **complete column**  

- A **diagonal line**  

________________________________________________________  

## **Draw Condition**  

If the board is **completely filled** and no player has won, the game declares a **draw.**  

________________________________________________________  

## **Project Structure**  

- `displayBoard()` – Draws the current game board.  

- `checkwin()` – Checks for a win in rows, columns, and diagonals.  

- `isboardfull()` – Determines if the board is full (draw condition).  

- `makemove()` – Places a move on the board.  

- `main()` – Controls game flow, handles user input, and alternates turns.  

________________________________________________________  

## **Dependencies**  

- Standard C++ libraries:  

  - `<iostream>` (for input/output)  

  - `<ctime>` (for random starting player)  

________________________________________________________  

## **Author**  

📝 **Syed Agha Ali**  

________________________________________________________  
