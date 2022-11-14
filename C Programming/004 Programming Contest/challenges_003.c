#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main() {

    /*
        Motu has N bananas and Patlu has M bananas.
        Can you tell how many bananas both of them have?
        You will given two non-negative integers N and M
    */

    int n,m,result;

    scanf("%d %d",&n,&m);

    result = n+m;

    printf("%d",result);


    return 0;
}

