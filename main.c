
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter  num 1: ");
    scanf("%d", &num1);
    printf("Enter  num 2: ");
    scanf("%d", &num2);
    
    if(num1>num2)
        printf("%d is bigger.", num1);
    else
        printf("%d is bigger than %d.\n", num2, num1);
        
    
    return 0;
}

