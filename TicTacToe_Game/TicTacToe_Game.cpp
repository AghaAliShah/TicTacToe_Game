#include <iostream>
#include <ctime>

using namespace std;

const int MAX_SIZE = 50; // Maximum size for the grid

void displayBoard(char board[MAX_SIZE][MAX_SIZE], int size) {
    cout << " ";
    for (int i = 0; i < size; ++i) {
        cout << " " << i;
    }
    cout << "\n";
    for (int i = 0; i < size; ++i) {
        cout << "  ";
        for (int j = 0; j < size; ++j) {
            cout << "_ ";
        }
        cout << "\n";
        cout << i;
        for (int j = 0; j < size; ++j) {
            cout << "|" << board[i][j];
        }
        cout << "|\n";
    }
    cout << " ";
    for (int i = 0; i < size; ++i) {
        cout << " _";
    }
    cout << "\n";
}

// validity
bool checkwin(char board[MAX_SIZE][MAX_SIZE], int size, char player) {
    for (int i = 0; i < size; ++i) {
        bool rowWin = true;
        bool colWin = true;
        for (int j = 0; j < size; ++j) {
            if (board[i][j] != player) {
                rowWin = false;
            }
            if (board[j][i] != player) {
                colWin = false;
            }
        }
        if (rowWin || colWin) {
            return true;
        }
    }

    // Check diagonals
    bool diag1 = true;
    bool diag2 = true;
    for (int i = 0; i < size; ++i) {
        if (board[i][i] != player) {
            diag1 = false;
        }
        if (board[i][size - 1 - i] != player) {
            diag2 = false;
        }
    }
    return diag1 || diag2;
}

// check if the board is full (draw)
bool isboardfull(char board[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true; 
}


void makemove(char board[MAX_SIZE][MAX_SIZE], int row, int col, char player) {
    board[row][col] = player;
}

int main() {
    int n;

    cout << "Enter the size of the Tic-Tac-Toe grid (n): ";
    cin >> n;

    if (n < 3 || n > MAX_SIZE) {
        cout << "Invalid grid size. Please choose a size between 3 and " << MAX_SIZE << ".\n";
        return 1;
    }

    char board[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            board[i][j] = ' ';
        }
    }

    
    srand(time(0));
    //starting player randomly
    char currentPlayer = (rand() % 2 == 0) ? 'X' : 'O';

    int row, col;
    while (true) {
        displayBoard(board, n);
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        if (row < 0 || row >= n || col < 0 || col >= n || board[row][col] != ' ') {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        makemove(board, row, col, currentPlayer);

        // Check if the current player has won
        if (checkwin(board, n, currentPlayer)) {
            displayBoard(board, n);
            cout << "player " << currentPlayer << " wins!\n";
            break;
        }

        // Check if the game is draw
        if (isboardfull(board, n)) {
            displayBoard(board, n);
            cout << "It's a draw!\n";
            break;
        }

        // Switching players for their next turns
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
