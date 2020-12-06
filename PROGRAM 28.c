#include<stdio.h>
int main()
{
    int n,i,fact,j;int sum=0;
    printf("Enter the Number");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        fact=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
        sum=sum+i;
    }
    printf("THE SUM OF PRIME NUMBERS IN THE GIVEN RANGE IS %d ",sum);
    return 0;
}