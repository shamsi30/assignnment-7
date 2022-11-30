#include<stdio.h>
int main()
{
    int x,y,i,z;
    printf("enter two numbers:");
    scanf("%d %d",&x,&y);
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
            break ;
    }
    z = (x * y) / i;     // i== LCM of two numbers , z= HCF//
    printf("The HCF of %d and %d is %d",x,y,z); 
    return 0;
}
// formula of HCf = { (x*y) / LCM } //