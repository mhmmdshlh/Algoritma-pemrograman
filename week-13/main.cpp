#include "myLib.hpp"

int main() {
  char player1 = 'x';
  char player2 = 'o';
  cout << "------------------------\n";
  cout << "        TicTacToe       \n";
  cout << "------------------------\n";
  cout << "1. 2 players\n";
  cout << "2. vs computer\n";
  while (true) {
    int opt;
    cout << "select one option: ";
    cin >> opt;
    if (opt == 1) {
      cout << "Player 1 = " << player1 << endl;
      cout << "Player 2 = " << player2 << endl;
      vsPlayer(player1, player2);
      break;
    } else if (opt == 2) {
      int difficulty;
      cout << "1. easy\n";
      cout << "2. hard\n";
      cout << "select difficulty: ";
      cin >> difficulty;
      cout << "You = " << player1 << endl;
      cout << "Computer = " << player2 << endl;
      vsComputer(player1, player2, difficulty);
      break;
    } else {
      cout << "option " << opt << " is not in menu!\n";
    }
  }
}