//c program to print sum of all the even numbers between 1 to N
#include <stdio.h>
void main() 
{
    int i,n,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0)
        {
         sum=sum+i;
        }
    }
    printf("the sum of the even numbers is %d",sum);
}
