#include <stdio.h>
void main() 
{
    int a,b,c,d,temp;
    printf("enter the values of a,b,c,d:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    if(a>b)
      {
          if(a>c)
            {
               temp=a;
            }
      }
    else if(b>c)
      {
              temp=b;
      }
    else
      {
         temp=c;
      }
    if(temp>d)
    {
        printf("%d is largest",temp);
    }
    else
      {
          printf("%d is largest",d);
      }
}






