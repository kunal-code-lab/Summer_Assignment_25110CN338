#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int randomNumber, guess, attempts = 0;

    // Generate random number
    srand(time(0));
    randomNumber = rand() % 100 + 1;

    printf("Number Guessing Game\n");
    printf("Guess a number between 1 and 100\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > randomNumber) 
        {
            printf("Too high! Try again.\n");
        }
        else if (guess < randomNumber) 
        {
            printf("Too low! Try again.\n");
        }
        else 
        {
            printf("Correct! You guessed the number in %d attempts.\n", attempts);
        }

    } while (guess != randomNumber);

    return 0;
}