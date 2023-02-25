#include <stdio.h> 
#include <string.h>
  int main()
{
    char op, first[80];
    float a, b;
    int n, result, num1, num2, num3;
    printf("Select operation-");
    scanf(" %c", &op);
    
    switch (op)
    {    
    // Program to reverse a given string
case '1':  
    printf("Enter a string:");
    scanf(" %c", &first);
    gets(first); 
    printf("\n Reverse of the given string is: %s \n", strrev(first));  
    break;

    //largest in two numbers
case '2':
    printf("Enter two numbers:-");
    scanf("%f %f", &a, &b);
    if (a>b)
    {
    printf("%f is largest", a);
    }
    else
    {
    printf("%f is largest \n", b);
    }
     break;

    //if the number is divisible by two, divides it by two, otherwise multiplies it by three
case '3':
    printf("Enter a number:");
    scanf("%d", &n);
    if (n%2==0)
    {
     result= n/2;
     printf("%d/2 is equal to %d \n",n, result);
    }
    else
    {
        result=n*3;
        printf("%d*3 is equal to %d \n",n, result);

    }
    break;
    
    //weather any number are equal among three numbers
case '4':
    printf("Enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 == num2 && num2 == num3)
    {
        printf("All numbers are equal");
    }
    else if (num1 == num2 && num2 != num3)
    {
        printf("%d is equal to %d", num1, num2);
    }
    else if (num2 == num3 && num2 != num1)
    {
        printf("%d is equal to %d", num2, num3);
    }
     else if (num1 == num3 && num1 != num2)
    {
        printf("%d is equal to %d", num1, num3);
    }
    else
    {
        printf("Every number is diffrent");
    }
    
   break;
    
    default:
    printf("The operator is not valid");
        break;
    }

    return 0;
}