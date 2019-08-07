#include <stdio.h>
#include <stdlib.h>

// Code By Sajibe Kanti
int main()
{
    int num1,num2;
    printf("Input Lower Limit:");
    scanf("%d",&num1);
    printf("Input upper Limit:\n");
    scanf("%d",&num2);
    for(num1;num1<=num2;num1++)
    {
        num1=num1+2;
        printf("%d\n",num1);
    }

    return 0;
}
