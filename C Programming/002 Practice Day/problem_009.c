#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Please enter three integers : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b)
    {
        printf("A and B both are bigger");
    }
    else if(a==c)
    {
        printf("A and C both are bigger");

    }
    else
    {
        printf("B and C both are bigger");
    }


    getch();
}


