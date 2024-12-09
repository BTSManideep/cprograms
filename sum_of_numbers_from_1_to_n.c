//c program to print sum of all the numbers from 1 to N
#include <stdio.h>
void main() 
{
    int i,n,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        sum=sum+i;
    }
    printf("the sum of the numbers is %d",sum);
}
