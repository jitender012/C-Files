#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, remainder, sum, product;
    float a, b;
    char op;
    char word[10];

    
    printf("Select operation-");
    scanf("%c", &op);
      

    switch (op)
    {
        // Request the user for two integers and outputs them and their sum. 
    case '1': 
        printf("Enter 1st digit-");
        scanf("%d", &num1);
        printf("Enter 2nd digit-");
        scanf("%d", &num2);
        sum = num1+num2;
        printf("%d + %d = %d\n", num1, num2, sum);
        break;
        
        //Request the user for two integers and outputs their remainder after division. 
    case '2':
         printf("Enter Divident-");
         scanf("%d", &num1);
         printf("Enter Divisor-");
        scanf("%d", &num2);
        remainder = num1 % num2;
        printf("Remainder= %d\n", remainder);
        break;
        
        //Request the user for two floats and outputs their product.  
    case '3':
        printf("Enter 1st digit-");
        scanf("%f", &a);
        printf("Enter 2nd digit-");
        scanf("%f", &b);
        product = a*b;
        printf("Product= %d\n", product);
        break; 
        
        //Request the user for a word and prints it twice on the same row.  
    case '4':
        printf("Enter a word- \n");
        scanf(" %s", &word);
        printf("%s %s \n", word, word);
        break;
    
    default:
    printf("The operator is not valid");
        break;
    }

    return 0;
}
