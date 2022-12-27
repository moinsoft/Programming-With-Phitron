#include<stdio.h>
int main()
{
    /*
        Write a C program to find the eligibility of admission for a professional course
        based on the following criteria:

        Marks in Math >=65
        Marks in Physics >=55
        Marks in Chemistry>=50

        Total in all three subject >=190 or
        Total in Math and Physics >=140

        Input the marks obtained in Physics :65
        Input the marks obtained in Chemistry :51
        Input the marks obtained in Math :72

        Total marks of Math, Physics and Chemistry : 188
        Total marks of Math and Physics : 137

        The candidate is not eligible.
    */

    int math,physics,chemistry;

   printf("Eligibility Criteria :\n");
   printf("\nMarks in Math >=65\n");
   printf("Marks in Physics >=55\n");
   printf("Marks in Chemistry>=50\n");
   printf("Total in all three subject >=190\n");
   printf("or\nTotal in Math and Physics >=140\n");
   printf("------------------------------------------\n");

   printf("Enter the marks obtained in Math : ");
   scanf("%d",&math);

   printf("Enter the marks obtained in Physics : ");
   scanf("%d",&physics);

   printf("Enter the marks obtained in Chemistry : ");
   scanf("%d",&chemistry);

   printf("\nTotal marks of Math, Physics and Chemistry : %d\n",math+physics+chemistry);
   printf("Total marks of Math and  Physics : %d\n",math+physics);

   if(math >= 65 && physics >= 55 && chemistry >= 50)
   {
      if((math+physics+chemistry) >= 190 || (math+physics) >= 140)
      {
          printf("\nThe candidate is eligible for admission.");
      }
      else
      {
          printf("\nThe candidate is not eligible for admission.");
      }
   }
   else
   {
       printf("\nThe candidate is not eligible for admission.");
   }


    getch();

}
