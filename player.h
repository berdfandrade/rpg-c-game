#ifndef PLAYER_H
#define PLAYER_H

struct playerStructure {
    char name[50];
    int health;
    int mana;
};

void DisplayStats(struct playerStructure Target);

#endif // PLAYER_H
