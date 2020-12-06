#include <stdio.h>
int main()
{
    long int bin, hex = 0, i = 1, remainder;
 
    printf("Enter the binary number: ");
    scanf("%ld", &bin);
    while (bin != 0)
    {
        remainder = bin % 10;
        hex = hex + remainder * i;
        i = i * 2;
        bin = bin / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hex);
    return 0;
}


