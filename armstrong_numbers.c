#include <stdio.h>
int main() 
{
   int n,sum=0,rem,temp=0;
   printf("enter the value of n:");
   scanf("%d",&n);
   temp=n;
   while(n>0)
   {
       rem=n%10;
       sum=sum+rem*rem*rem;
       n=n/10;
   }
   if(sum==temp)
   {
        printf("the given number is armstrong");
   }
   else
   {
       printf("the given number is not armstrong");
   }
}
