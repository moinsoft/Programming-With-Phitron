//w%2==0 && w!=2
//w%4==0

#include<stdio.h>
int main()
{
    int w;

    printf("Please enter the weight of the watermelon : ");
    scanf("%d",&w);

    if(w%4==0)
    {
        printf("Possible.");
    }
    else
    {
        printf("Impossible.");
    }



    getch();
}
