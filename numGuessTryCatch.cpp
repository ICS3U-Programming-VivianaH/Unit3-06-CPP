// Copyright 2025 Viviana Hurtado
// Created by Viviana Hurtado
// March 27, 2025
// This program tells if you guessed right
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main() {
    // Seed for random number
    std::srand(std::time(0));
    int random_number = std::rand() % 10;  // Between 0 and 9

    // Ask the user to guess
    std::string user_input;
    std::cout << "Guess a number between 0 and 9: ";
    std::cin >> user_input;

    try {
        // Convert user input to an integer
        int user_number = std::stoi(user_input);

        // Check if the guess is correct
        if (user_number == random_number) {
            std::cout << "You guessed correctly!" << std::endl;
            // Check if the guess is wrong
        } else {
            std::cout << "You guessed wrong, the answer is "
            << random_number << std::endl;
        }
        // Check if the guess is not an integer
    } catch (...) {
        std::cout << user_input << " is not an integer" << std::endl;
    }

    return 0;
}
