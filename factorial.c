#include <stdio.h>
int main() 
{
    int i,n;
    long int fact=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d!=%ld",n,fact);
}
