#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("enter the values of a,b and operater :");
    scanf("%d %c %d",&a,&op,&b);
    switch(op)
      {
          case'+':
             printf("addition is %d",a+b);
             break;
          case'-':
             printf("subtraction is %d",a-b);
             break;
          case'*':
             printf("multiplication is %d",a*b);
             break;
          case'/':
             printf("quotient is %d",a/b);
             break;
          case'%':
             printf("remainder is %d",a%b);
             break;
          default:
             printf("invalid operater");
             break;
      }
}
