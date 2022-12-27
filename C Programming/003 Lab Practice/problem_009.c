#include<stdio.h>
int main()
{
    /*
        Write a C program to accept a coordinate point in a XY coordinate system and determine
        in which quadrant the coordinate point lies.
    */

    int x,y;

	printf("Enter the values for X and Y coordinate : ");
	scanf("%d%d",&x,&y);

	if(x>0 && y>0)
    {
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n",x,y);
    }
	else if(x<0 && y>0)
    {
        printf("The coordinate point (%d,%d) lies in the Second quadrant.\n",x,y);
    }
	else if(x<0 && y<0)
    {
        printf("The coordinate point (%d, %d) lies in the Third quadrant.\n",x,y);
    }
	else if(x>0 && y<0)
    {
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n",x,y);
    }

	else
    {
        printf("The coordinate point (%d,%d) lies at the origin.\n",x,y);
    }



    getch();

}
