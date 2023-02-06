#include<stdio.h>
int main()
{
	long bin_1,bin_2;
	int i=0,rem=0,sum[20];
	printf("Enter the first Binary number:");
	scanf("%ld",&bin_1);
	printf("Enter the second Binary number:");
	scanf("%ld",&bin_2);
	while(bin_1!=0 || bin_2!=0)
	{
		sum[i++]=(bin_1%10 + bin_2%10 +rem)%2;
		rem=(bin_1%10 + bin_2%10 +rem)/2;
		bin_1/=10;
		bin_2/=10;
	}
	if(rem!=0)
	{
		sum[i++]=rem;
		--i;
	}
	printf("\nSum of two binary number:");
	while(i>=0)
	{
		printf("%d",sum[i--]);
	}
	return 0;
	
}
