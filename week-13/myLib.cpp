#include "myLib.hpp"
#include <chrono>
#include <ctime>
#include <thread>
#include <type_traits>

const int n = 3;
char box[n][n];

void fillarr() {
  for (int r = 0; r < n; r++) {
    for (int c = 0; c < n; c++) {
      box[r][c] = ' ';
    }
  }
}

void displayBoard() {
  for (int r = 0; r < n; r++) {
    for (int c = 0; c < n; c++) {
      cout << ' ' << box[r][c];
      if (c != n - 1) {
        cout << " |";
      }
    }
    cout << endl;
    if (r != n - 1) {
      for (int i = 0; i < n; i++) {
        cout << "---";
        if (i != n - 1) {
          cout << '|';
        }
      }
      cout << endl;
    }
  }
}

bool checkWin(char player) {
  bool win = false;
  // check rows
  for (int r = 0; r < n; r++) {
    for (int c = 0; c < n; c++) {
      if (box[r][c] != player) {
        win = false;
        break;
      }
      win = true;
    }
    if (win) {
      return win;
    }
  }
  // check columns
  for (int c = 0; c < n; c++) {
    for (int r = 0; r < n; r++) {
      if (box[r][c] != player) {
        win = false;
        break;
      }
      win = true;
    }
    if (win) {
      return win;
    }
  }

  // check diagonals
  for (int i = 0; i < n; i++) {
    if (box[i][i] != player) {
      win = false;
      break;
    }
    win = true;
  }
  if (win) {
    return win;
  }
  for (int i = 0; i < n; i++) {
    if (box[i][n - i - 1] != player) {
      win = false;
      break;
    }
    win = true;
  }
  return win;
}

bool checkTie() {
  for (int r = 0; r < n; r++) {
    for (int c = 0; c < n; c++) {

      if (box[r][c] == ' ') {
        return false;
        break;
      }
    }
  }
  return true;
}

int minimax(bool isMax) {
  if (checkWin('x')) {
    return 1;
  }
  if (checkWin('o')) {
    return -1;
  }
  if (checkTie()) {
    return 0;
  }
  int score = isMax ? -10000 : 10000;

  if (isMax) {
    for (int r = 0; r < n; r++) {
      for (int c = 0; c < n; c++) {
        if (box[r][c] == ' ') {
          box[r][c] = 'x';
          int max_eval = minimax(false);
          box[r][c] = ' ';
          score = max_eval > score ? max_eval : score;
        }
      }
    }
    return score;
  } else {
    for (int r = 0; r < n; r++) {
      for (int c = 0; c < n; c++) {
        if (box[r][c] == ' ') {
          box[r][c] = 'o';
          int min_eval = minimax(true);
          box[r][c] = ' ';
          score = min_eval < score ? min_eval : score;
        }
      }
    }
    return score;
  }
}

int bestMove(char player) {
  int row, col;
  int score = player == 'x' ? -1000 : 1000;
  if (player == 'x') {
    for (int r = 0; r < n; r++) {
      for (int c = 0; c < n; c++) {
        if (box[r][c] == ' ') {
          box[r][c] = 'x';
          int max_eval = minimax(false);
          box[r][c] = ' ';
          if (max_eval > score) {
            score = max_eval;
            row = r;
            col = c;
          }
        }
      }
    }
  } else {
    for (int r = 0; r < n; r++) {
      for (int c = 0; c < n; c++) {
        if (box[r][c] == ' ') {
          box[r][c] = 'o';
          int min_eval = minimax(true);
          box[r][c] = ' ';
          if (min_eval < score) {
            score = min_eval;
            row = r;
            col = c;
          }
        }
      }
    }
  }
  int spot = row * n + col;
  return spot;
}

void computerMove(char computer, int difficulty) {
  int spot, row, col;
  if (difficulty == 1) {
    srand(time(0));
    row = rand() % n;
    col = rand() % n;
    while (box[row][col] != ' ') {
      row = rand() % n;
      col = rand() % n;
    }
  } else {
    spot = bestMove(computer);
    row = (spot) / 3;
    col = (spot) % 3;
  }
  cout << computer << "'s move (1-" << n * n << "): ";
  this_thread::sleep_for(chrono::seconds(1));
  spot = row * n + col;
  cout << spot + 1 << endl;
  box[row][col] = computer;
}

void playerMove(char player) {
  int spot;
  cout << player << "'s move (1-" << n * n << "): ";

  if (cin >> spot) {
    int row = (spot - 1) / n;
    int col = (spot - 1) % n;
    if (box[row][col] == ' ') {
      box[row][col] = player;
    } else {
      playerMove(player);
    }
  } else {
    cin.clear();
    cin.ignore();
    playerMove(player);
  }
}

void vsPlayer(char player1, char player2) {
  fillarr();
  displayBoard();
  while (true) {
    playerMove(player1);
    displayBoard();
    if (checkWin(player1)) {
      cout << "Player 1 win!\n";
      break;
    }
    if (checkTie()) {
      cout << "Draw!\n";
      break;
    }
    playerMove(player2);
    displayBoard();
    if (checkWin(player2)) {
      cout << "Player 2 win!\n";
      break;
    }
  }
}

void vsComputer(char player, char computer, int difficulty) {
  fillarr();
  displayBoard();
  while (true) {
    playerMove(player);
    displayBoard();
    if (checkWin(player)) {
      cout << "You win! :)\n";
      break;
    }
    if (checkTie()) {
      cout << "Draw! -_-\n";
      break;
    }
    computerMove(computer, difficulty);
    displayBoard();
    if (checkWin(computer)) {
      cout << "You lose! :(\n";
      break;
    }
  }
}
