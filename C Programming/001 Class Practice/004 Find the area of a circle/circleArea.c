#include<stdio.h>
int main()
{
    //Code for calculating the area of a circle.

    int radius;

    printf("Enter the radius of a circle : ");
    scanf("%d",&radius);

    float area = 3.14159*radius*radius;
    printf("\nThe area of the circle is = %f\n",area);


    getch();
}

