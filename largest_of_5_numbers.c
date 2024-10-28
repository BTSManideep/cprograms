#include <stdio.h>
void main() 
{
    int a,b,c,d,e,temp;
    printf("enter the values of a,b,c,d,e:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    
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

    if(d>e)
      {
          if(d>temp)
            {
               printf("%d",d);
            }
      }
    else if(e>temp)
      {
               printf("%d",e);
      }
    else
      {
              printf("%d",temp);
      }
}







