#include<stdio.h>
int main()
{
    /*
        Write a program in C to display the Square of the number upto given an integer.

    */


    int i,n,sqr;

    printf("Enter an integer : ");
    scanf("%d",&n);

    printf("\n");

    for(i=1; i<=n; i++)
    {
        sqr = i*i;
        printf("Number is : %d and Square of the %d is : %d\n",i,i,sqr);
    }



    getch();
}
