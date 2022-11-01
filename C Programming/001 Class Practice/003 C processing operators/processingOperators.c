#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    int sum = num1+num2;

    printf("\nThe sum of num1 and num2 is = %d\n",sum);


    getch();
}

