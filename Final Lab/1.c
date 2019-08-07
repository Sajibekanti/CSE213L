#include <stdio.h>
int main (){
    int num1, num2, sum, prod, diff, quot, rem;
    puts("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    prod = num1 * num2;
    diff = num1 - num2;
    quot = num1 / num2;
    rem = num1%num2;
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);
    printf("The difference of %d and %d is %d.\n", num1, num2, diff);
    printf("The product of %d and %d is %d.\n", num1, num2, prod);
    printf("The quotient of %d and %d is %d.\n", num1, num2, quot);
    printf("The remainder of %d and %d is %d.\n", num1, num2, rem);
    return 0;
}
