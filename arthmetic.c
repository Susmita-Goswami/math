//write a program that takes two integer and display sum
#include<stdio.h>
int main (void)
{
    int num1 ,num2, sum;
    float avg;
    printf("enter two number ");
    scanf("%d %d", &num1, &num2);
    sum=num1+num2;
    printf("the sum is %d\n",sum);
    avg=sum/2;
    printf("the average is %f",avg);
    return 0;
}
