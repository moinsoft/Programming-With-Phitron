#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main() {

    /*
        Rahim has X% share, Karim has Y% share and
        Habib has (X*Y)% share of the company Zeta. Can you tell the
        amount of share of Habib?
    */

    int x,y,habib;
    char p1,p2;

    scanf("%d %c %d %c",&x,&p1,&y,&p2);

    habib = x*y;

    printf("%d%%",habib);


    return 0;
}
