#include <stdio.h>

int main()
{
    int num, pro=1, r;
    printf("Enter any number : ");
    scanf("%d", &num);
    while(num !=0)
    {
        r=num%10;
        pro=pro*r;
        num = num / 10;
    }


    printf("Product of all digits = %d", pro);
return 0;
}
