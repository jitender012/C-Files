//check prime number
#include <stdio.h>
main()
{
    int i, n, count;
    printf("Enter a numer\n");
    scanf("%d",&n);
    for(i=1; i=n/2; i++)
    {
       
        if(n%i==0){
            count==1;
            break;
        }
    if(count==1)
    {
        printf("The number %d is prime\n",n);
    }
    else{
        printf("The number %d is not prime\n",n);
    }
    }
}