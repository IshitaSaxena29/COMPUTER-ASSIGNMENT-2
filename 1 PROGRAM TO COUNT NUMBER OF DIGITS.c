/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int c=0;
    while(num!=0)
    {
        num=num/10;
        c++;
    }
printf("The number of digits in the number is %d ",c);
    return 0;
}

