#include<stdio.h>
int main()
{
    int x;

    printf("Please enter an input : ");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("The input is an even number.");
    }
    else
    {
        printf("The input is an odd number.");
    }



    getch();
}

