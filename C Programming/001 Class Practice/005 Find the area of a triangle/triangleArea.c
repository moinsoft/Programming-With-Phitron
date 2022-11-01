#include<stdio.h>
int main()
{
    //Code for calculating the area of a triangle.

    float base,height;

    printf("Enter Base and Height : ");
    scanf("%f %f",&base,&height);

    float area = .5*base*height;
    printf("\nThe area of triangle is = %.2f\n",area);


    getch();

}


