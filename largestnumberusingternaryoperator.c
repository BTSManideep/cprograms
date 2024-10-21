#include<stdio.h>
void main()
{
    int a,b,c,l;
    printf("enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    //logic using ternary operator 
    l=((a>b&&a>c)?a:(b>c?b:c));
    printf("%d is largest number",l);
}
