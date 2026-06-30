#include <stdio.h>

struct Student 
{
    int roll;
    char name[50];
    int marks[5];
    int total;
    float percentage;
};

int main() 
{
    struct Student s;
    int i;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    s.total = 0;

    printf("Enter marks of 5 subjects:\n");

    for (i = 0; i < 5; i++) 
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);

        s.total += s.marks[i];
    }

    s.percentage = s.total / 5.0;

    printf("\n========== MARKSHEET ==========\n");

    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);

    printf("Marks:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("Subject %d: %d\n", i + 1, s.marks[i]);
    }

    printf("Total Marks: %d/500\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);

    if (s.percentage >= 40)
        printf("Result: PASS");
    else
        printf("Result: FAIL");

    return 0;
}