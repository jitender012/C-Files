#include <stdio.h>
#include <conio.h>

struct student
{
    int roll_no;
    char name[20];
    int marks;
};

int main()
{
    struct student stud1;
//Display first instructions
    printf("\n\nEnter the details of student:\n");
    printf("Enter the roll number of student:");
    scanf("%d", &stud1.roll_no);

    printf("Eneter the name of student:");
    scanf("%s", &stud1.name);
    printf("Eneter marks of student:");
    scanf("%d", &stud1.marks);

    printf("\n\nThe data enterd is as follows:\n");

    printf("the roll number of student is %d\n", stud1.roll_no);
    printf("the name of student is %s\n", stud1.name);
    printf("marks of student is %d\n", stud1.marks);
}
