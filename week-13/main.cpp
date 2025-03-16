#include "myLib.hpp"
#include <limits>

int main() {
    char player1 = 'x';
    char player2 = 'o';
    std::cout << "------------------------\n";
    std::cout << "        TicTacToe       \n";
    std::cout << "------------------------\n";
    std::cout << "1. 2 players\n";
    std::cout << "2. vs computer\n";

    while (true) {
        int opt;
        std::cout << "Select an option: ";
        if (std::cin >> opt) {
            if (opt == 1) {
                std::cout << "Player 1 = " << player1 << std::endl;
                std::cout << "Player 2 = " << player2 << std::endl;
                vsPlayer(player1, player2);
                break;
            } else if (opt == 2) {
                int difficulty;
                std::cout << "1. Easy\n";
                std::cout << "2. Hard\n";
                std::cout << "Select difficulty: ";
                if (std::cin >> difficulty && (difficulty == 1 || difficulty == 2)) {
                    std::cout << "You = " << player1 << std::endl;
                    std::cout << "Computer = " << player2 << std::endl;
                    vsComputer(player1, player2, difficulty);
                    break;
                } else {
                    std::cout << "Invalid difficulty! Please enter 1 or 2.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            } else {
                std::cout << "Option " << opt << " is not in the menu!\n";
            }
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Please enter a number.\n";
        }
    }
    return 0;
}
