#ifndef MYLIB_HPP
#define MYLIB_HPP

#include <iostream>

// Function to fill the board with spaces
void fillBoard();

// Function to display the game board
void displayBoard();

// Function to handle player's move
void playerMove(char player);

// Function to handle computer's move
void computerMove(char computer, int difficulty);

// Function to check if a player has won
bool checkWin(char player);

// Function to check if the game is a tie
bool checkTie();

// Function for player vs player mode
void vsPlayer(char player1, char player2);

// Function for player vs computer mode
void vsComputer(char player, char computer, int difficulty);

#endif // MYLIB_HPP
