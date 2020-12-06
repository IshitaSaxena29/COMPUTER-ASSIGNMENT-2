#include <stdio.h>

int main()
{
    int num, rev=0, r;
    printf("Enter any number : ");
    scanf("%d", &num);
    while(num !=0)
    {
        r=num%10;
        rev=rev*10+r;
        num = num / 10;
    }


    printf("Reverse of the given number is = %d", rev);
return 0;
}
