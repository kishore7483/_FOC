#include<stdio.h>
int convert(int n);
int main()
{
	int n;
	printf("Enter a decimal number:");
	scanf("%d",&n);
	printf("Converting Decimal to Octal number... ");
	printf("\nOctal number of %d is: %d ",n,convert(n));
}
int convert(int n)
{
	int octal=0,i=1;
	while(n!=0)
	{
		octal+=(n%8)*i;
		n=n/8;
		i=i*10;
	}
	return octal;
}
