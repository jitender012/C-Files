#include<stdio.h>
#include<conio.h>

int factorialIterative(int n){
    int val = 1;
    for (int i = n; i >1; i--)
    {
        val*=i;
    }
    return val;
    
}

int main()
{
    int  i, n;
    printf("Enter the value of number for factorial: ");
    scanf("%d",&n);
    int factorial= factorialIterative(n);
    printf("The value of factorial is %d\n", factorial);
    return 0;


}

