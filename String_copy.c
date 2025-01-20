#include <stdio.h>
#include <string.h>
int main() 
{
   char str1[20],str2[20];
   printf("enter the 1st string: ");
   scanf("%s",str1);
   printf("enter the 2nd string: ");
   scanf("%s",str2);
   strcpy(str1,str2);
   printf("%s \t %s",str1,str2);
}
