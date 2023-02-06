#include<stdio.h>
#include<math.h>
int main()
{
	long int octal_num,dec=0,t;
	int i=0;
	printf("Enter a Octal number:");
	scanf("%ld",&octal_num);
	t=octal_num;
	while(octal_num!=0)
	{
		dec+=(octal_num % 10)*pow(8,i++);
		octal_num/=10;
	}
	printf("Converting Octal to Decimal number... ");
	printf("\nThe Decimal value of %ld is: %d",t,dec);
	return 0;
}

