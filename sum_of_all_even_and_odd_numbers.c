//c program to find sum of all the even numbers and odd numberes between 1 to N and also print their difference.
#include<stdio.h>
#include<stdlib.h>
void main() 
{
    int i,n,sumeven=0,sumodd=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0)
        {
         sumeven=sumeven+i;
        }
        else
        {
            sumodd=sumodd+i;
        }
    }
    printf("the sum of the difference is %d", abs(sumeven-sumodd));
    // abs() is used to convert the value inton a +ve
}
