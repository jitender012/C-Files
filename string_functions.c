#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char fname[]="Jitender", lname[]=" Kumar";
    int length;
    /*printf("Enter your first name:\n");
    gets(fname);
    printf("Enter your last name:\n");
    gets(lname);*/
    length=strlen(fname);
    printf("\n\nLENGTH:-     Your name has %d characters", length);
    strcat(fname, lname);
    printf("\nJOIN:-      Your full name is: %s\n",fname);
    printf("UPPER:-    %s\n",strupr(fname));
    printf("REVERSE STRING:- %s\n\n",strrev(fname));
    return 0;
}
