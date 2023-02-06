#include <stdio.h>
int binary_mult(int a, int b)
{
    int res = 0, c = 0;
    while (b != 0)
    {
        if (b & 1)
    
        res = res + a << c;
        a <<= 1;
        b >>= 1;
        c++;
    }
    return res;
}

int main()
{
    int a,b;
    printf("Enter 1st Binary number:");
    scanf("%d",&a);
    printf("Enter 2nd Binary number:");
    scanf("%d",&b);
    int result = binary_mult(a, b);
    printf("Result of %d * %d = %d\n", a, b, result);
    return 0;
}
