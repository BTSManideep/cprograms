#include <stdio.h>
void main() 
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
      {
        printf("the given character is vowel");
      }
    else
      {
        printf("the given character is not a vowel");
      }
}
