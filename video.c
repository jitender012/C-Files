#include <stdio.h>

int main()
{
   int  b, c, enr_no, choice;
   char address[20];
   

   printf("\n\nEnter your choice:\n ");
   printf("1. For Student  information\n");
   printf("2. For Theory counselling batch-scheduling\n");
   printf("3. For Practical counselling batch-scheduling\n");
   printf("4. For Assignment submissions\n");
   printf("5. For Change of the correspondence address\n");
   printf("6. For General Queries\n");
   printf("7. For Quit \n");
   scanf(" %d", &choice);

   switch (choice)
   {

   case 1:
      printf("Enter your enrolment no. \n");
      scanf("%d", &enr_no);
      printf("Registration number: %d\n", enr_no);
      printf("Programme:  BCA 2nd semester \n");
      printf("Period: Jan 2022 - June 2022 \n");
      printf("Duration: 6 months \n");
      printf("Batch: 1 \n");
      printf("Study Centre: PC Training Institute \n");
      printf("Regional Centre: Delhi 2\n");
      printf("Fees: PAID");
      break;
      
   case 2:
      printf("Enter batch number:\n");
      scanf("%d", &b);
      printf("Schedule for theory counseling: \n 14/5/2022 at 9am \n 16/5/2022 at 9am \n 18/5/2022 at 9am \n 20/5/2022 at 11am \n");
      break;
    
   case 3:
      printf("Enter batch number:\n");
      scanf("%d", &b);
      printf("Schedule for Practical counseling: \n 14/5/2022 at 12am \n 16/5/2022 at 11am \n 18/5/2022 at 12pm \n 20/5/2022 at 1pm ");
      break;

   case 4:
      printf("Last date for assignment submission: 30th May 2022\n");
      break;
   
   case 5:
      printf("Present address: B-63, Timarpur, Delhi\n");
      printf("For change the address press 1 else enter \n");
      scanf("%d",&c);
      if (c=1)
      {
         printf("Set new address-\n");
         scanf("%s",address);
         printf("Your new address is: %s", address);
      }
      break;

   case 6:
   printf("Frequently asked questions:");
   break;

   case 7:
      break;

   default:
   printf("\n\nEnter your choice between 1-7:\n ");
   printf("1. For Student  information\n");
   printf("2. For Theory counselling batch-scheduling\n");
   printf("3. For Practical counselling batch-scheduling\n");
   printf("4. For Assignment submissions\n");
   printf("5. For Change of the correspondence address\n");
   printf("6. For General Queries\n");
   printf("7. For Quit n\n");
   scanf(" %d", &choice);
      break;
   }

   return 0;
}
