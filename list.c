// Create a structure Function  called myStructure
#include <stdio.h>
#include <string.h>

struct myStructure
{
    int myRollno;
    int mark;
} ;
void print(int myRollno, int mark){
    printf("%d %d \n", myRollno, mark);
}
int main()
{
    struct myStructure s1 = {21121245, 88};
    print(s1.myRollno, s1.mark);
    
    
    // strcpy(s1.myName, "Aman");
    // s1.myRollno = 245768445;
    // strcpy(s1.myCourse, "BCA");
    // strcpy(s2.myName, "Asish");
    // s2.myRollno = 214578452;
    // strcpy(s2.myCourse, "MCA");
    // // Print values
    // printf("Name: %s\nRoll number: %d \nCourse: %s\n\n", s1.myName,s1.myRollno ,s1.myCourse);
    // printf("Name: %s\nRoll number: %d \nCourse: %s\n", s2.myName,s2.myRollno ,s2.myCourse);
    // // printf("Name: %s\nRoll number: %d \nCourse: %s\n", s1.myName,s1.myRollno ,s1.myCourse);
    

    
}