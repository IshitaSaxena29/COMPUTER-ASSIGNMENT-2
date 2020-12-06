#include<stdio.h>
int main()
{
    int n;int i;
    printf("ENTER VALUE OF N :");
    scanf("%d",&n);
    printf("ALL NATURAL NUMBERS FROM 1 TO %d IN REVERSE ORDER ARE : \n",n);
    for(i=n;i>=1;i--)
    printf("%d ",i);
    
}