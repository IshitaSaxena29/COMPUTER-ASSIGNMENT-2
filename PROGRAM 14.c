#include <stdio.h>

int main()
{
    int num, sum=0, r;
    printf("Enter any number : ");
    scanf("%d", &num);
    while(num !=0)
    {
        r=num%10;
        sum=sum+r;
        num = num / 10;
    }


    printf("Sum of all digits = %d", sum);
return 0;
}
