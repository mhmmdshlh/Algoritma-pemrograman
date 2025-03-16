#include "myLib.hpp"
#include <chrono>
#include <ctime>
#include <thread>

const int n = 3; // Board size
char box[n][n];  // Game board

// Function to fill the board with spaces
void fillBoard() {
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            box[r][c] = ' ';
        }
    }
}

// Function to display the game board
void displayBoard() {
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            std::cout << ' ' << box[r][c];
            if (c != n - 1) {
                std::cout << " |";
            }
        }
        std::cout << std::endl;
        if (r != n - 1) {
            for (int i = 0; i < n; i++) {
                std::cout << "---";
                if (i != n - 1) {
                    std::cout << '|';
                }
            }
            std::cout << std::endl;
        }
    }
}

// Function to check if a player has won
bool checkWin(char player) {
    // Check rows and columns
    for (int i = 0; i < n; i++) {
        if ((box[i][0] == player && box[i][1] == player && box[i][2] == player) ||
            (box[0][i] == player && box[1][i] == player && box[2][i] == player)) {
            return true;
        }
    }
    // Check diagonals
    if ((box[0][0] == player && box[1][1] == player && box[2][2] == player) ||
        (box[0][2] == player && box[1][1] == player && box[2][0] == player)) {
        return true;
    }
    return false;
}

// Function to check if the game is a tie
bool checkTie() {
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            if (box[r][c] == ' ') {
                return false;
            }
        }
    }
    return true;
}

// Minimax algorithm for AI decision-making
int minimax(bool isMax) {
    if (checkWin('x')) return 1;
    if (checkWin('o')) return -1;
    if (checkTie()) return 0;

    int score = isMax ? -10000 : 10000;
    char player = isMax ? 'x' : 'o';

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            if (box[r][c] == ' ') {
                box[r][c] = player;
                int currentScore = minimax(!isMax);
                box[r][c] = ' ';
                if (isMax) {
                    score = std::max(score, currentScore);
                } else {
                    score = std::min(score, currentScore);
                }
            }
        }
    }
    return score;
}

// Function to determine the best move for the computer
int bestMove(char player) {
    int bestScore = (player == 'x') ? -1000 : 1000;
    int bestRow = -1, bestCol = -1;

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            if (box[r][c] == ' ') {
                box[r][c] = player;
                int score = minimax(player == 'o');
                box[r][c] = ' ';
                if ((player == 'x' && score > bestScore) || (player == 'o' && score < bestScore)) {
                    bestScore = score;
                    bestRow = r;
                    bestCol = c;
                }
            }
        }
    }
    return bestRow * n + bestCol;
}

// Function to handle the computer's move
void computerMove(char computer, int difficulty) {
    int spot, row, col;
    if (difficulty == 1) {
        srand(time(0));
        do {
            row = rand() % n;
            col = rand() % n;
        } while (box[row][col] != ' ');
    } else {
        spot = bestMove(computer);
        row = spot / n;
        col = spot % n;
    }
    std::cout << computer << "'s move (1-" << n * n << "): ";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << (row * n + col + 1) << std::endl;
    box[row][col] = computer;
}

// Function to handle the player's move
void playerMove(char player) {
    int spot;
    while (true) {
        std::cout << player << "'s move (1-" << n * n << "): ";
        if (std::cin >> spot) {
            int row = (spot - 1) / n;
            int col = (spot - 1) % n;
            if (spot >= 1 && spot <= n * n && box[row][col] == ' ') {
                box[row][col] = player;
                break;
            } else {
                std::cout << "Invalid move! Try again.\n";
            }
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Please enter a number.\n";
        }
    }
}

// Function for player vs player mode
void vsPlayer(char player1, char player2) {
    fillBoard();
    displayBoard();
    while (true) {
        playerMove(player1);
        displayBoard();
        if (checkWin(player1)) {
            std::cout << "Player 1 wins!\n";
            break;
        }
        if (checkTie()) {
            std::cout << "It's a draw!\n";
            break;
        }
        playerMove(player2);
        displayBoard();
        if (checkWin(player2)) {
            std::cout << "Player 2 wins!\n";
            break;
        }
    }
}

// Function for player vs computer mode
void vsComputer(char player, char computer, int difficulty) {
    fillBoard();
    displayBoard();
    while (true) {
        playerMove(player);
        displayBoard();
        if (checkWin(player)) {
            std::cout << "You win! :)\n";
            break;
        }
        if (checkTie()) {
            std::cout << "Draw! -_-\n";
            break;
        }
        computerMove(computer, difficulty);
        displayBoard();
        if (checkWin(computer)) {
            std::cout << "You lose! :(\n";
            break;
        }
    }
}
