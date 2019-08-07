#include<stdio.h>
#include<conio.h>
void main() {
     int a[10],sum=0,i;
     float avg;
     for(i=0;i<10;i++) {
		printf("Enter any 10 numbers: ");
        scanf("%d",&a[i]);
        sum+=a[i];
     }
     avg=sum/10;
     printf("Sum = %d",sum);
    printf("Average = %f",avg);
     getch();
}
