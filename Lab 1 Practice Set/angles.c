#include <stdio.h>

int main()
{
    int a, b, c;

    /* Input two angles of the triangle */
    printf("Enter first Angle: ");
    scanf("%d", &a);
    printf("Enter Second Angle: ");
    scanf("%d", &b);

    /* Compute third angle */
    c = 180 - (a + b);

    /* Print value of the third angle */
    printf("Third Angle  = %d", c);

    return 0;
}
