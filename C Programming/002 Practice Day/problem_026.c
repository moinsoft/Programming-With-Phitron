#include<stdio.h>
int main()
{
    /*
        Write a C program to take two non-negative integers N and M.
        Here N and M represents time in hours (24 hours format).
        You need to print from N to M, if you need to start from beginning again,
        you can do that. See the sample input output for more clarification.

    */


    int n,m,i;

    printf("Enter two non-negative integers : ");
    scanf("%d%d",&n,&m);

    printf("\n");

    if(n<m)
    {
        for(i=n; i<=m; i++)
        {
            printf("%d ",i);
        }
    }
    else if(n>m || n==m)
    {
        for(i=n; i<=23; i++)
        {
            printf("%d ",i);
        }

        for(i=0; i<=m; i++)
        {
            printf("%d ",i);
        }
    }




    getch();
}
