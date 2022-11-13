#include<stdio.h>
int main()
{
    int x,y,z;

    printf("Please enter three non-negative integers : ");
    scanf("%d %d %d",&x,&y,&z);

    if(x+y>z && x+z>y && y+z>x)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }



    getch();
}
