#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    std::srand(static_cast<unsigned int>(std::time(0))); 

    int actualGuess = std::rand() % 100 + 1;
    int attempts = 0;
    std::cout << "Welcome to the Guessing Game !!!!" << std::endl;
    std::cout << "The rules of the game are to guess the number randomly generated between 1 and 100. The goal is to guess the exact same number generated by the bot. It will guide you by informing if the number is higher or lower." << std::endl;

    bool guessed = false;
    while (!guessed) {
        std::cout << "Enter a number between 1 and 100: " << std::endl;
        std::cin >> guess;
        attempts++;

        if (guess == actualGuess) {
            std::cout << "You have guessed it right in " << attempts << " attempts!!" << std::endl;
            guessed = true;
        } else if (guess > actualGuess) {
            std::cout << "You are higher than the actual number!!" << std::endl;
        } else {
            std::cout << "You are lower than the actual number!!" << std::endl;
        }
    }

    return 0;
}





























