#include<stdio.h>
int main()
{
    int n,i,w,sum;
    i = 1;
    sum = 0;

    printf("Enter the number of passengers : ");
    scanf("%d",&n);

    while(i<=n)
    {
        scanf("%d",&w);
        sum += w;
        i++;
    }

    printf("Total sum of weights = %d\n\n",sum);

    return 0;
}
