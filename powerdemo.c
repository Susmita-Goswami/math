#include<stdio.h>
int main(void)
{
    int x,y;
    printf("enter x= ");
    scanf("%d",&x);
    printf("enter y= ");
    scanf("%d",&y);
    double result=pow(x,y);
    printf("enter the result %lf",result);

    return 0;
}
