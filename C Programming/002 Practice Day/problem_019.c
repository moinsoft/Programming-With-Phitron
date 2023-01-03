#include<stdio.h>
int main()
{
    /*
        Write a program in C to display n terms of natural number and their sum.

    */


    int i,n,sum=0;

    printf("Enter any number for sum of n'th : ");
    scanf("%d",&n);

    printf("\nThe first %d natural number is : ",n);

    for(i=1; i<=n; i++)
    {
        printf("%d ",i);

        sum = i + sum;
    }

    printf("\nThe Sum of Natural Number upto %d terms : %d",n,sum);


    getch();
}
