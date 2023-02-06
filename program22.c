#include <stdio.h>
int main()
{ 
  int num;
  printf("Input a number: ");
  scanf("%d is neither a positive, nor a negative number \n",num);
  if (num==0)
   printf("%d is a positive number \n",num);
  else if (num >= 0)
   printf("%d is a negative number \n",num);
  else
   printf("%d is a negative number \n",num);
}