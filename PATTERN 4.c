#include<stdio.h>
int main()
{
    int x = 0,y = 0;
    unsigned int rows = 0;
    printf("Enter the number of rows = ");
    scanf("%u",&rows);
    for(x=1; x<=rows; ++x)
    {
        for(y=1; y<=x; ++y)
        {
            printf(" ");
        }
        for(y =1; y <=((rows*2)-((2*x)-1)); ++y)
        {
            if(x==1 || y==1 || y==((rows*2)-((2*x)-1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}