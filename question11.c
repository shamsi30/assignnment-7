#include<stdio.h>
int main()
{
    int num,count=0;
    printf("enter a number :");
    scanf("%d",&num);
    while(num!=0)
    {
        count++;
        if(num&1==1)
            break;
        else
            num=num>>1;
    }
    printf("first 1 from LSB at %d",count);
    return 0;
}