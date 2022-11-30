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
    z= (x*y)/ i ;
    if(z==1)
        printf("Yes,%d and %d is co-prime number",x,y);
    else
        printf("No,%d and %d is not co-prime number",x,y);
    
    return 0;
}