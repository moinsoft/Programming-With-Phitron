#include<stdio.h>
int main()
{
    int x,y;

    printf("Please enter two non-negative integers : ");
    scanf("%d %d",&x,&y);

    if(x+y>=100)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    getch();
}
