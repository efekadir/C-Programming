#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
}Location;

typedef union {
    int coins;
    char weapon[20];
}Loot;

typedef struct{
    char* name;
    int id;
    Location loc;
    Loot drop;
}Ghost;

void encryptName(char *namePtr);

int main(){
    Ghost boss;

    boss.name = malloc(100 * sizeof(char));
    printf("Enter name: ");
    fgets(boss.name, 100, stdin);

    boss.name[strcspn(boss.name, "\n")] = '\0';

    boss.id = 99;
    boss.loc.x = 150;
    boss.loc.y = 300;
    encryptName(boss.name);
    printf("%s\n", boss.name);
    
    strcpy(boss.drop.weapon, "Cursed Blade");
    printf("\nWeapon: %s\n\n", boss.drop.weapon);
    
    // Weapon will be overwritten after assigning a value to coins. This is the purpose of this example.
    boss.drop.coins = 500;
    printf("\"\"\"Coin value assigned. Weapon data has been overwritten.\"\"\"\n");

    printf("\nID: %d\nLocation: %d, %d\nCoins: %d\nWeapon: %s\n", boss.id, boss.loc.x, boss.loc.y, boss.drop.coins, boss.drop.weapon);
    free(boss.name);

    return 0;
}

void encryptName(char *namePtr){

    while(*namePtr != '\0'){
        if(*namePtr == 'a' || *namePtr == 'e' || *namePtr == 'i' || *namePtr == 'o' || *namePtr == 'u'){
            *namePtr = '*';
        }
        namePtr++;
    }
}