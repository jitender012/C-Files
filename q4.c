#include <stdio.h>
#include<conio.h>

int main()
{
   int enr_no, choice, b,c;
   char name[20]; 
   char address[40];

   printf("Enter your choice:\n\n ");
   printf("For Student  information press 1\n");
   printf("For Theory counselling batch-scheduling press 2\n");
   printf("For Practical counselling batch-scheduling press 3 \n");
   printf("For Assignment submissions press 4\n");
   printf("For Change of the correspondence address press 5\n");
   printf("For General Queries press 6\n");
   printf("For Quit press 7\n");
   
   scanf("%d",choice);

   switch (choice)
   {
   case 1:
      printf("Enter your enrolment no. \n");
      scanf("%d", &enr_no);
      printf("Registration number: %d\n",enr_no);
      printf("You are registered for BCA 2nd semester \n");
      printf("Year of study: Jan 2022 - June 2022 \n");
      printf("Name of the programme: BCA \n");
      printf("Batch: 1st \n");
      printf("Duration: 6 months \n");
      printf("Study Centre: PC Training Institute \n");
      printf("Regional Centre: Delhi 2\n");
      break;
   case 2:
      printf("Enter batch number:\n");
      scanf("%d", &b);
      printf("Schedule for theory counseling: \n 14/5/2022 at 9 AM \n 16/5/2022 at 9 AM \n 18/5/2022 at 9 AM \n 20/5/2022 at 11 AM ");
      break;
   case 3:
      printf("Enter batch number:\n");
      scanf("%d", &c);
      printf("Schedule for Practical counseling: \n 14/5/2022 at 12am \n 16/5/2022 at 11am \n 18/5/2022 at 12pm \n 20/5/2022 at 1pm ");
      break;
   case 4:
      printf("Last date for assignment submission: 30th May 2022");
      
      break;
   case 5:
   printf("Present address: B-63, Timarpur, Delhi");
   break;
   
   default:
   printf("Enter your choice:\n\n ");
   printf("For Student  information press 1\n");
   printf("For Theory counselling batch-scheduling press 2\n");
   printf("For Practical counselling batch-scheduling press 3 \n");
   printf("For Assignment submissions press 4\n");
   printf("For Change of the correspondence address press 5\n");
   printf("For General Queries press 6\n");
   printf("For Quit press 7\n");
   scanf("%d", choice);
      break;
   }


   return 0;
}
