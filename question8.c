#include<stdio.h>
int main()
{
    int num,i,j,count=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=num;i>=1;i++){
        count=0;
        for(j=1;j<i;j++){
            if(i%j==0)
                count++;
            
        }
        if(count==1)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
    
}