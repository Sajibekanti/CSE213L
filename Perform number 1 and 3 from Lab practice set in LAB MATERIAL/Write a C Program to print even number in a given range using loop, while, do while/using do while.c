#include <stdio.h>
// Code By Sajibe Kanti
int main()
{
    int num1,num2;
    printf("Input Lower Limit:");
    scanf("%d",&num1);
    printf("Input upper Limit:");
    scanf("%d",&num2);
    do
    {
        printf("%d\n",num1);
        num1=num1+2;
    }
    while(num1<=num2);
    return 0;
}
