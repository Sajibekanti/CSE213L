#include <stdio.h>
// Code By Sajibe Kanti
int main()
{
int i, start;
printf("Enter Your Number:");
scanf("%d", &start);
i=start;
do
{
    printf("%d \n", i);
    i=i-1;
}
    while(i>=1);
return 0;
}
