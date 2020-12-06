#include<stdio.h>
int main()
{
    int i;int n;int s=0;
    printf("ENTER VALUE OF n : ");
    scanf("%d",&n);
    printf(" SUM OF ALL ODD NUMBERS FROM 1 TO %d  ARE :\n",n);
    for(i=1;i<=n;i=i+2)
    {
        s=s+i;
    }
    printf("%d ",s);
    return 0;
}