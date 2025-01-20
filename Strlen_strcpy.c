#include <stdio.h>
#include <string.h>
int main() 
{
   char str1[20],str2[20];
   printf("enter the 1st string: ");
   scanf("%s",str1);
   printf("enter the 2nd string: ");
   scanf("%s",str2);
   printf ("the length of 1st string :%d", strlen(str1));
   printf ("\nthe length of 2nd string :%d", strlen(str2));
   if(strcmp(str1,str2)==0)
    {
     printf("\nboth strings are equal");
    }
   else
   {
     printf("\nboth strings are not equal");
   }
}
