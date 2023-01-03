#include<stdio.h>
int main()
{
    /*
        Write a C program to find the sum of the first 10 natural numbers.

    */


    int i,num=10,sum=0;

    for(i=1; i<=num; i++)
    {
        printf("%d ",i);

        sum = i + sum;
    }

    printf("\nThe Sum is : %d",sum);


    getch();
}
