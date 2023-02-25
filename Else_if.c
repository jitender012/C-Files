#include <stdio.h>
int main()
{
    int grade;
    printf("Enter the total numer of marks:\n");
    scanf("%d", &grade);
    if (grade <= 50)
        printf("Grade D\n");
    else if (grade <= 60)
        printf("Grade C\n");
    else if (grade <= 75)
        printf("Grade B\n");
    else
        printf("Grade A\n");
}