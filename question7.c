#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("enter two numbers a and b:");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
            printf("%d\t",i);
    }
    return 0;
}