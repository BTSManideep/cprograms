#include <stdio.h> 
int main() 
{
    int a,i,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    b=a;
    for(i=1;i<=a;i++)
    {
        printf("%d ",i);
    }
    
          printf("\n");
    
    for(i=1;i<=b;i++)
    {
        printf("%d ",a);
        a=b-i;
    }
}
