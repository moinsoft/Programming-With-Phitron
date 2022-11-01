#include<stdio.h>
int main()
{
    /*
        Write a C program to take a character variable and input and show the corresponding ASCII value of that
        character
    */

    char A,C,a,d;

    printf("Enter these (A, C, a and d) ASCII character : ");
    scanf("%c %c %c %c",&A,&C,&a,&d);

    printf("\nThe ASCII value of A : %d\n",A);
    printf("The ASCII value of C : %d\n",C);
    printf("The ASCII value of a : %d\n",a);
    printf("The ASCII value of d : %d",d);

    getch();

}
