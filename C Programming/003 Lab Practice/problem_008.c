#include<stdio.h>
int main()
{
    //Write a C program to find the largest of three numbers.

    int num1,num2,num3;

    printf("Enter 3 numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);

    printf("1st Number = %d\n",num1);
    printf("2nd Number = %d\n",num2);
    printf("3rd Number = %d\n",num3);

    if (num1>num2 && num1>num3)
    {
        printf("\nThe 1st Number is the greatest among three.");
    }
    else if(num2>num1 && num2>num3)
    {
        printf("\nThe 2nd Number is the greatest among three.");
    }
    else if(num3>num1 && num3>num2)
    {
        printf("\nThe 3rd Number is the greatest among three.");
    }
    else
    {
        printf("They are equal.\n");
    }


    getch();

}
