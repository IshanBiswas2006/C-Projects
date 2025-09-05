#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char getComputerMove() {
    int randNum = rand() % 3;
    switch (randNum) {
        case 0: return 'r';
        case 1: return 'p';
        case 2: return 's';
    }
    return 'r';
}

int getResult(char user, char comp) {
    if (user == comp) return -1;
    if ((user == 'r' && comp == 's') ||
        (user == 'p' && comp == 'r') ||
        (user == 's' && comp == 'p')) return 1;
    return 0;
}

const char* moveName(char move) {
    switch (move) {
        case 'r': return "Rock";
        case 'p': return "Paper";
        case 's': return "Scissors";
        default: return "Invalid";
    }
}

int main() {
    char userMove;
    srand(time(NULL));

    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Enter your move (r for Rock, p for Paper, s for Scissors): ");
    scanf(" %c", &userMove);

    if (userMove != 'r' && userMove != 'p' && userMove != 's') {
        printf("Invalid input. Please enter r, p, or s.\n");
        return 1;
    }

    char compMove = getComputerMove();
    int result = getResult(userMove, compMove);

    printf("You chose %s. Computer chose %s.\n", moveName(userMove), moveName(compMove));

    if (result == -1)
        printf("It's a tie!\n");
    else if (result == 1)
        printf("You win!\n");
    else
        printf("Computer wins!\n");

    return 0;
}