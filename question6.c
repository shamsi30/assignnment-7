#include<stdio.h>
int main()
{
    int i,j,f;
    for(i=1;i<=100;i++)
    {
        f=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                f++;
                break;
            }
        }
        if(f==0 && i!=1)
            printf("%d\t",i);
    }
    return 0;    
}