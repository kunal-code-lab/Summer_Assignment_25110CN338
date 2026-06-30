#include <stdio.h>

int main() 
{
    int answer, score = 0;

    printf("===== Quiz Application =====\n\n");

    // Question 1
    printf("1. Which language is used for C programming?\n");
    printf("1. Python\n2. C\n3. Java\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) 
    {
        printf("Correct!\n");
        score++;
    } else 
    {
        printf("Wrong!\n");
    }

    // Question 2
    printf("\n2. Which keyword is used to declare a variable in C?\n");
    printf("1. int\n2. var\n3. define\n4. let\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1) 
    {
        printf("Correct!\n");
        score++;
    } else 
    {
        printf("Wrong!\n");
    }

    // Question 3
    printf("\n3. Which symbol is used for comments in C?\n");
    printf("1. #\n2. //\n3. @\n4. &\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) 
    {
        printf("Correct!\n");
        score++;
    } else 
    {
        printf("Wrong!\n");
    }

    printf("\nQuiz Completed!");
    printf("\nYour Score: %d/3", score);

    return 0;
}