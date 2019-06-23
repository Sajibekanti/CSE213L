#include <stdio.h>

// Code By Sajibe Kanti

int main()
{
    int n;

    /*
     * Input a number from user
     */
    printf("Enter value of n: ");
    scanf("%d", &n);

    while(n>=1)
    {
        printf("%d\n", n);
        n--;
    }

    return 0;
}
