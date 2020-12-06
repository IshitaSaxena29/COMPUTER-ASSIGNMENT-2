#include <stdio.h>

int main()
{
    int num, rev=0, temp,r;
    printf("Enter any number : ");
    scanf("%d", &num);
    temp=num;
    while(num !=0)
    {
        r=num%10;
        rev=rev*10+r;
        num = num / 10;
    }
    if(rev==temp)
    printf("THE NUMBER IS PALINDROME");
    else
    printf("THE NUMBER IS NOT PALINDROME");
return 0;
}
