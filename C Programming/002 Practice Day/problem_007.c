#include<stdio.h>
int main()
{
    int a,b;

    printf("Please enter two integers : ");
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        printf("A is bigger");
    }
    else if(a<b)
    {
        printf("B is bigger");

    }
    else
    {
        printf("They are equal");
    }


    getch();
}
