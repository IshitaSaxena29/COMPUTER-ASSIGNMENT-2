#include<stdio.h>
int main()
{
    int i;int n;int s=0;
    printf("ENTER VALUE OF n : ");
    scanf("%d",&n);
    printf(" SUM OF ALL NUMBERS FROM 1 TO %d  ARE :\n",n);
    for(i=1;i<=n;i=i+1)
    {
        s=s+i;
    }
    printf("%d ",s);
    return 0;
}