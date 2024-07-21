// guessing game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // generating a random number

    srand(time(NULL));

    int random_number = (rand() % 100) + 1;

    int guessed_number;
    int total_guesses = 0;

    do {

        printf("Guess the number : ");
        scanf("%d", &guessed_number);

        if(guessed_number == random_number) {
            total_guesses++;
            break;
        }
        else if(guessed_number > random_number) {
            printf("Guess lower\n");
        }
        else {
            printf("Guess higher\n");
        }

        total_guesses++;

    } while(guessed_number != random_number);

    printf("\nCongratulations!\n");
    printf("You have guessed the right number in %d attempts\n\n", total_guesses);

    return 0;

}