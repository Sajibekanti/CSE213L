#include<stdio.h>
#include<conio.h>
main()
// Code by Sajibe Kanti
{
    int r,n,m,sum;
    //clrscr();
    printf("Enter a  Integer :");
    scanf("%d",&n);
    if(n<0)
        printf("The given number is not +ve Integer");
    else
    {
        sum=0;
        m=n;
        while(m!=0)
        {
            r=m%10;
            sum+=r;
            m/=10;
        }
        printf("The given number  =%d\n",n);
        printf("Sum of digits of the given number is:%d",sum);
    }
}
