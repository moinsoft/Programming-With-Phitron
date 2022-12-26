#include<stdio.h>
int main()
{
    /*
        Write a C program to read the age of a candidate and determine whether
        it is eligible for casting his/her own vote.
    */

    int age;

    printf("Enter the age of a candidate : ");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("Congratulation! You are eligible for casting your vote.\n");
    }
    else
    {
        printf("Sorry, You are not eligible to caste your vote.\nYou would be able to caste your vote after %d year.",18-age);

    }


    getch();

}
