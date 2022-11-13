#include<stdio.h>
int main()
{
    int x;

    printf("Please enter one non-negative integer : ");
    scanf("%d",&x);

    if(x>=80 && x<=100)
    {
        printf("A+");
    }
    else if(x>=70 && x<=79)
    {
        printf("A");
    }
    else if(x>=60 && x<=69)
    {
        printf("A-");
    }
    else if(x>=50 && x<=59)
    {
        printf("B");
    }
    else if(x>=40 && x<=49)
    {
        printf("C");
    }
    else if(x>=33 && x<=39)
    {
        printf("D");
    }
    else if(x>=33 && x<=39)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }


    getch();
}
