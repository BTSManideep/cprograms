#include <stdio.h>
int main() 
{
   int n,rev=0,rem,temp=0;
   printf("enter the value of n:");
   scanf("%d",&n);
   temp=n;
   while(n>0)
   {
       rem=n%10;
       rev=rev*10+rem;
       n=n/10;
   }
   if(rev==temp)
   {
       printf("it is a palindrome number");
   }
   else
   {
       printf("it is not a palindrome number");
   }
}
