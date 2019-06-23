#include<stdio.h>
#include<conio.h>
int main()
{
    int i, first, last, sum=0;

    /* Reads range to find sum of odd numbers */
    printf("Enter lower limit: ");
    scanf("%d", &first);
    printf("Enter upper limit: ");
    scanf("%d", &last);

    for(i=first; i<=last; i++)
    {
    	if(i % 2 != 0)
    	{
       		sum += i;
    	}
    }
// Code By Sajibe Kanti
    printf("Sum of odd numbers (%d to %d) = %d", first, last, sum);
    getch();
    return 0;
}
