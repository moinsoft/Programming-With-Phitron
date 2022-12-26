#include<stdio.h>
int main()
{
    /*
        Write a C program to accept the height of a person in centimeter and categorize
        the person according to their height.

        Height < 150c = Dwarf
        Height = 150c = Average Height
        Height >= 165c = Tall
    */

    float height;

    printf("Enter the height of the person in centimeter : ");
    scanf("%f",&height);

    if (height<150)
    {
        printf("The person is Dwarf.\n");
    }
    else if(height>=150 && height<165)
    {
        printf("The person is of average height.\n");
    }
    else if(height>=165)
    {
        printf("The person is tall.\n");
    }
    else
    {
        printf("Abnormal height.\n");
    }


    getch();

}
