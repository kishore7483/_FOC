#include<stdio.h>

int main()
{ 
  int i,n,Sum=0,numbers;
  float Average;
  
  printf("enter the range of numbers (end limit):\n");
  scanf("%d",&n);
  
  printf("\nenter the elements one by one:\n");
  for(i=0;i<n;++i)
  {
  	scanf("%d",&numbers);
  	Sum += numbers;
  }
  
  Average = Sum/n;
  
  printf("\nSum of the %d numbers=%d",n,Sum);
  printf("\nAverage of the %d numbers=%f",n, Average);
  
  return 0;
}