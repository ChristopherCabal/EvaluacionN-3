#include <iostream>
#include "Map.h"
#include "Troll.h"
#include "GiantSnake.h"
#include "Demon.h"
#include "Slime.h"

// Function to generate a random enemy from the list of available enemies
enemy* generateRandomEnemy() {
    int random = rand() % 4; // Generate a random number between 0 and 3
    switch (random) {
        case 0: return new Troll();
        case 1: return new GiantSnake();
        case 2: return new Demon();
        case 3: return new Slime();
    }
    return nullptr; // Default case, should not happen
}

int main() {
    srand(time(0)); // Seed the random number generator with the current time
    Map map(10, 10); // Create a map of size 10x10
    map.generate(); // Generate the map

    char input;
    while (true) {
        map.print(); // Print the current state of the map
        std::cout << "Move (w/a/s/d): ";
        std::cin >> input; // Get the player's move input

        map.movePlayer(input); // Move the player based on the input
        if (map.checkForEncounter()) { // Check if there is an encounter with an enemy
            enemy* encounter = generateRandomEnemy(); // Generate a random enemy
            system("cls"); // Clear the console (Note: system("cls") is for Windows. Use system("clear") for Unix-based systems)
            
            // Engage in battle until the enemy's HP is 0
            while (encounter->get_HP() != 0) {
                std::cout << "You have encountered an enemy!" << std::endl;
                encounter->print(); // Print enemy details
                std::cout << "HP: " << encounter->get_HP() << std::endl;
                std::cout << "Select action: " << std::endl;
                std::cout << "Press (A) to attack" << std::endl;
                std::cout << "Press (B) to flee" << std::endl;
                std::cin >> input; // Get the player's action input
                
                // Player chooses to attack
                if (input == 'A' || input == 'a') {
                    std::cout << "The enemy has been defeated" << std::endl;
                    break;
                }
                
                // Player chooses to flee
                if (input == 'B' || input == 'b') {
                    std::cout << "You ran successfully" << std::endl;
                    break;
                }
                
                // Invalid input handling
                else {
                    std::cout << "Enter a valid option" << std::endl;
                }
            }
            delete encounter; // Clean up the dynamically allocated enemy
        }
        
        // Check if the player has reached the goal
        if (map.checkForGoal()) {
            std::cout << "You have reached the goal, congratulations!!!" << std::endl;
            break; // Exit the game loop
        }
    }

    return 0; // End the program
}
