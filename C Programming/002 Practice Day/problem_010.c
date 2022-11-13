#include<stdio.h>
int main()
{
    int x;

    printf("Please enter one non-negative integer : ");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }


    getch();
}
