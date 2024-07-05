#include "Map.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

// Constructor to initialize the map with given dimensions, starting player position, and goal position
Map::Map(int width, int height) 
    : width(width), height(height), playerX(0), playerY(0), goalX(width - 1), goalY(height - 1), hasEncounter(false) {
    grid.resize(height, std::vector<char>(width, '.')); // Initialize the grid with empty spaces
    grid[playerY][playerX] = 'P'; // Place the player at the starting position
    grid[goalY][goalX] = 'G'; // Place the goal at the opposite corner
    srand(time(0)); // Seed the random number generator with the current time
}

// Method to generate the map with random obstacles
void Map::generate() {
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            if (rand() % 10 < 2) { // 20% chance of being an obstacle
                grid[y][x] = '#'; // Place an obstacle
            }
        }
    }
}

// Method to move the player in the given direction
void Map::movePlayer(char direction) {
    int newX = playerX; // Temporary variable for new X position
    int newY = playerY; // Temporary variable for new Y position

    // Update new position based on the direction
    if (direction == 'w' && playerY > 0) newY--;
    else if (direction == 's' && playerY < height - 1) newY++;
    else if (direction == 'a' && playerX > 0) newX--;
    else if (direction == 'd' && playerX < width - 1) newX++;

    // Check if the new position is not an obstacle
    if (!isObstacle(newX, newY)) {
        grid[playerY][playerX] = '.'; // Clear the previous player position
        playerX = newX;
        playerY = newY;
        grid[playerY][playerX] = 'P'; // Place the player at the new position
    } else {
        std::cout << "There's an obstacle! You can't move in that direction." << std::endl; // Print message if the new position is an obstacle
    }

    hasEncounter = (rand() % 10 < 3); // 30% chance of encounter
}

// Method to print the current state of the map
void Map::print() const {
    for (const auto& row : grid) {
        for (char cell : row) {
            std::cout << cell << ' ';
        }
        std::cout << std::endl;
    }
}

// Method to check if there is an encounter with an enemy
bool Map::checkForEncounter() const {
    return hasEncounter;
}

// Method to check if the player has reached the goal
bool Map::checkForGoal() const {
    return (playerX == goalX && playerY == goalY);
}

// Method to set a new goal position on the map
void Map::setGoal(int x, int y) {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        grid[goalY][goalX] = '.'; // Clear the previous goal position
        goalX = x;
        goalY = y;
        grid[goalY][goalX] = 'G'; // Place the goal at the new position
    }
}

// Helper function to check if a given position is an obstacle
bool Map::isObstacle(int x, int y) const {
    return grid[y][x] == '#';
}
