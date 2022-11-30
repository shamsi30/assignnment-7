#include<stdio.h>
#include<math.h>
int main()
{
    int x,rem,temp,sum=0;
    printf("enter a number:");
    scanf("%d",&x);
    temp=x;
    while(x!=0)
    {
        rem=x%10;
        sum=sum+(rem*rem*rem);
        x=x/10;
    }
    if(temp==sum)
        printf("%d is a Armstrong number",temp);
    else
        printf("%d is not Armstrong number",temp);
    return 0;
}