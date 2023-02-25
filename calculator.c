//Calculator using switch statement
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    char op;
    float result;
    
    printf("Enter 1st digit: \n");
    scanf("%f", &num1);
    printf("Enter operator: \n");
    scanf(" %c", &op);
    printf("Enter 2nd digit: \n");
    scanf("%f", &num2);

    switch (op)
    {
    case '-':
        result = num1-num2;
        printf("Result: %f", result);
        break;
    case '+':
        result = num1+num2;
        printf("Result: %f", result);
        break;
     case '*':
        result = num1*num2;
        printf("Result: %f", result);
        break; 
    case '/':
        result = num1/num2;
        printf("Result: %f", result);
        break;
    case '1':
        exit(0);
        break;
    default:
    printf("The operator is not valid");
        break;
    }

    getch();
    return 0;
}























