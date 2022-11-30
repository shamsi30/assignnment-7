#include<stdio.h>
int main()
{
    int i,a=0,b=1,c=0,num;
    printf("enter a number :");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("The %d'th term of the fibonnaci series is %d",num,b);
    return 0;
}