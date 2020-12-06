/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define SIZE 8
int main()
{
	int i, bit_size;
	
	char num[SIZE + 1], one_comp[SIZE + 1];
	printf("Enter the binary number\n");
	gets(num);
	
	for(i = 0; i < SIZE; i++)
	{
	    if(num[i] == '0')
                {
	        one_comp[i] = '1';
	    }
	    else if(num[i] == '1') {
	        one_comp[i] = '0';
	    }
	}
	one_comp[SIZE] = '\0';
	printf("Ones' complement of binary number %s is %s\n",num, one_comp);
	return 0;
}
 
