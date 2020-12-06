#include<stdio.h>
int main()
{
    int i;int n;int s=0;
    printf("ENTER VALUE OF A NUMBER : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    printf("%d ",s);
    return 0;
}