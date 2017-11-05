#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,userInput;
    int space1,space2,space3,space4;
    printf("enter a number");
    scanf("%d",&userInput);
    for(i=1;i<=userInput;i++)
    {
        for(j=0;j<i;j++)
            printf("*");
        for(j;j<userInput+5;j++)
            printf(" ");
        for(j=i;j<userInput+1;j++)
            printf("*");
        for(j=0;j<i+5;j++)
            printf(" ");
        /************************************/
            for(j=0;j<i-1;j++)
                printf(" ");
            for(j;j<userInput;j++)
                printf("*");
        /*************************************/
            for(j=i-userInput;j<userInput;j++)
                printf(" ");
            for(j=0;j<i;j++)
                printf("*");
        printf("\n");

    }
}
