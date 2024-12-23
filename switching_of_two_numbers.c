
//switching of two numbers
#include <stdio.h>
int main() 
{
    int a,b;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    printf("before switching:");
    printf(" a=%d, b=%d",a,b);
    printf("\nafter switching:");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d, b=%d",a,b);
}
