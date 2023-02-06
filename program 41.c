#include<stdio.h>
int main()
{
	int n,bin,rem,dec=0,base=1;
	printf("Enter a binary number:");
	scanf("%d",&n);
	bin=n;
	while(n>0)
	{
		rem=n%10;
		dec+=rem*base;
		n/=10;
		base*=2;
	}
	printf("Binary to Decimal number..");
	printf("\nThe Decimal of %d is: %d",bin,dec);
	return 0;
}
