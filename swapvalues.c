//

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
  int x, y, temp;
  printf("Enter two digits:");
  scanf("%d %d", &x, &y);
  printf("Fisrt digit: %d\nSecond digit: %d\n", x, y);
  //First Method-using temp
  temp=x;
  x=y;
  y=temp;
  printf("\nAfter swap:-\nFisrt digit: %d\nSecond digit: %d\n", x, y);
  //Second Method- without using temp
  x=x-y;
  y=x+y;
  x=y-x;
  printf("\nAfter swap:-\nFisrt digit: %d\nSecond digit: %d\n", x, y);


  

  printf("");

  return 0;
}

