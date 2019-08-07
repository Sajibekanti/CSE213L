#include <stdio.h>
#include <stdlib.h>
int biggestNum(int, int,int);//function prototype
int main()
{
    int num1,num2,num3; //declare the variables
    printf("Enter the first number:  ");
    scanf("%d",&num1);//get input from user for num1
    printf("Enter the second number: ");
    scanf("%d",&num2);//get input from user for num2
    printf("Enter the third number: ");
    scanf("%d",&num3);//get input from user for num3
//function call
    biggestNum(num1,num2,num3);
    getch();
    return 0;
}
    int biggestNum(int num1,int num2,int num3){//function definition
    if(num1<num2){//compare num1 and num2
            if(num1<num3){//compare num1 and num3
         printf("\nSmallest number is: %d\n",num1);
            }
            else{
                printf("\nSmallest number is: %d\n",num3);
            }
    }
    else{
        if(num2<num3){//compare num2 and num1
            printf("\nSmallest number is: %d\n",num2);
        }
        else{
            printf("\nSmallest number is: %d\n",num3);
        }
    }
    }
