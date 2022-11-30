#include<stdio.h>
int main()
{
    int i,a=0,b=1,c=0,num;
    printf("enter a number:");
    scanf("%d",&num);
    printf("First %d terms of the fibonacci series are....\n",num);
    printf("%d\t%d\t",a,b);
    for(i=2;i<=num;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    printf("\n");
    return 0;
}