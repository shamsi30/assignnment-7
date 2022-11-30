#include<stdio.h>
int main()
{
    int n,rem,x,sum;
    printf("Armstrong numbers are ........\n");
    for(n=1;n<=1000;n++)
    {
        sum=0;
        x=n;
        while(x!=0)
        {
            rem=x%10;
            sum=sum+rem*rem*rem;
            x=x/10;
        }
        if(sum==n)
            printf("%d\t",n);
    }
    return 0;
}