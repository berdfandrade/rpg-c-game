#include <stdio.h>
#include <string.h>

typedef struct playerStructure{
    char name[50];
    int health; 
    int mana;
} player;

// Function Prototype
void DisplayStats(player Target);

int main () {
    player Hero, Villain;

    // Hero 
    strcpy(Hero.name, "Sir Maximus");
    Hero.health = 60;
    Hero.mana = 30;

    // Villain 
    strcpy(Villain.name, "Sir Jenkins");
    Villain.health = 70;
    Villain.mana = 20;

    DisplayStats(Hero);
    DisplayStats(Villain);
    return(0);
}

// Takes a player as an argument and prints their name, heatlh and mana. Returns nothing.
void DisplayStats(player Target){
    printf("\n\nName : %s | Heatlh: %d Mana: %d\n\n", Target.name, Target.health, Target.mana);
};

