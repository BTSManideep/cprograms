#include <stdio.h>
void main() 
{
    int age;
    printf("enter the age of the person:");
    scanf("%d",&age);
    
    if(age>=18)
      {
          printf("the person is eligible...");
      }
    else
      {
          printf("the person is not eligible...");
      }
      
}
