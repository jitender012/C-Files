#include<stdio.h>
#include<conio.h>
int main()

{  
    
    int a, bin, dec = 0, base = 1, rem;  
    clrscr();
    printf (" Enter a binary number  \n");  
    scanf (" %d", &a);  
  
    bin = a; 
      
      
    while ( a > 0)  
    {  
        rem = a % 10;  
        dec = dec + rem * base;  
        a = a / 10; 
        base = base * 2;  
    }  
  
    printf ( " The binary number %d is equal to %d in decimal \n", bin, dec); 
    
      return 0;
}  