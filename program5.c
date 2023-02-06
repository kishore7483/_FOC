#include<stdio.h>
int main()
{ int sum;
  int arr[5];
  printf("enter the numbers:");
  for(int i=0;i<=5;i++)
  {
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
  }
  printf("the sum is :%d",sum);
  return 0;
}