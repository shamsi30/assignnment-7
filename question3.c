#include<stdio.h>
int main()
{
    int i,j,a=0,b=1,c=0,num=1,x,f=0;
    printf("enter a number for check number is in fibonacci series or not:");
    scanf("%d",&x);
    for(i=1;i<=num;i++)
    {
        f=0;
        for(j=2;j<num;j++)
        {
            c=a+b;
             if(x==c)
                f = 1;
            a=b;
            b=c;
        }
        if(f==1)
            printf("%d is in fibonacci series",x);
        else
            printf("%d is not in fibonacci series",x);

    }
    return 0;
}