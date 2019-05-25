#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, sub4, sub5;
    float total, average;

    /* Input marks of all five subjects */
    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &sub1, &sub2, &sub3, &sub4, &sub5);

    /* Calculate total, average and percentage */
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5.0;

    /* Print all results */
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);


    return 0;
}
