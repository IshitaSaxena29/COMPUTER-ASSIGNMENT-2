#include<stdio.h>
#include<math.h>
#include<string.h>

int hex_to_oct(char hex[]);
void main()
{
	char hex[20],c;
	int n;
	printf("Please Enter any Hexadecimal Number: ");
	scanf("%s",hex);
	printf("Equivalent Octal Value = %d",hex_to_oct(hex));
	getch();
}
int hex_to_oct(char hex[])
{
	int i,len, dec=0, oct=0;
	for(len=0; hex[len]!='\0'; len++);
	for(i=0; hex[i]!='\0'; i++,len--)
	{
		if(hex[i]>='0' && hex[i]<='9')
		{
			dec= dec + (hex[i]-'0')*pow(16,len-1);
		}
		if(hex[i]>='A' && hex[i]<='F')
		{
			dec = dec + (hex[i]-55)*pow(16,len-1);
		}
		if(hex[i]>='a' && hex[i]<='f')
		{
			dec = dec + (hex[i]-87)*pow(16,len-1);
		}
	} 
	i=1;
	while(dec!=0)
	{
		oct = oct + (dec%8)*i;
		dec = dec/8;
		i = i*10;
	}
	return oct;
}