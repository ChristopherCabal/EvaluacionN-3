#ifndef ENEMY_H
#define ENEMY_H

// Base class for enemy characters
class enemy {
public:
    // Constructor
    enemy();

    // Virtual destructor to ensure proper cleanup of derived objects
    virtual ~enemy();

    // Setter for the HP attribute
    void set_HP(int hp);
    
    // Setter for the DMG attribute
    void set_DMG(int dmg);
    
    // Getter for the HP attribute
    int get_HP() const;
    
    // Getter for the DMG attribute
    int get_DMG() const;

    // Pure virtual function to print enemy details
    virtual void print() const = 0;

protected:
    int HP;  // Health points of the enemy
    int DMG; // Damage points of the enemy
};

#endif // ENEMY_H
