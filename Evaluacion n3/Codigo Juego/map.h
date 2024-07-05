#ifndef MAP_H
#define MAP_H

#include <vector>
#include "enemy.h"

// Map class to represent the game map and handle player movement and encounters
class Map {
public:
    // Constructor to initialize the map with given width and height
    Map(int width, int height);
    
    // Method to generate the map with obstacles
    void generate();
    
    // Method to move the player in a given direction
    void movePlayer(char direction);
    
    // Method to print the current state of the map
    void print() const;
    
    // Method to check if there is an encounter with an enemy
    bool checkForEncounter() const;
    
    // Method to check if the player has reached the goal
    bool checkForGoal() const;
    
    // Method to set the goal position on the map
    void setGoal(int x, int y);

private:
    int width;  // Width of the map
    int height; // Height of the map
    std::vector<std::vector<char>> grid; // 2D vector to represent the map grid
    int playerX; // Player's current X position
    int playerY; // Player's current Y position
    int goalX;   // Goal's X position
    int goalY;   // Goal's Y position
    bool hasEncounter; // Flag to indicate if there is an encounter

    // Helper function to check if a given position is an obstacle
    bool isObstacle(int x, int y) const;
};

#endif // MAP_H
