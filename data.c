#include<stdio.h>
#include<string.h>

struct Student
{
    char name[25];
    int age;
    
    
    //F for female and M for male
    char gender;
};

int main()
{
    int id;
    struct Student s1, s2, s3, s4;
    
    s1.age = 18;
    s2.age = 19;
    s3.age = 17;
    s4.age = 20;

    strcpy(s1.name, "Viraaj");
    strcpy(s2.name, "Virat");
    strcpy(s3.name, "Viram");
    strcpy(s4.name, "Viral");
    
    printf("Enter ID:-\n");
    scanf("%d", &id);
    

    switch (id)
    {
    case 01:
        printf("Student Name: %s\n",s1.name);
        printf("Student Age: %d\n", s1.age);
        
        break;
   case 02:
        printf("Student Name: %s\n",s2.name);
        printf("Student Age: %d\n", s2.age);
        break;
   case 03:
        printf("Student Name: %s\n",s3.name);
        printf("Student Age: %d\n", s3.age);
        break;
   case 04:
        printf("Student Name: %s\n",s4.name);
        printf("Student Age: %d\n", s4.age);
        break;
    
    default:
    printf("Wrong ID\n");
        break;
    }
   

    
    return 0;
}