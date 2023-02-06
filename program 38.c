#include <stdio.h>
#include <string.h>

void bin_Subtraction(char a[], char b[])
{
    int c[20];
    int la = strlen(a);
    int lb = strlen(b);
    int i;
    int carry = 0;

    for (i = 0; i < la; i++)
    {
        c[i] = ((a[i] - '0') - (b[i] - '0') - carry);
        if (c[i] < 0)
        {
            c[i] = c[i] + 2;
            carry = 1;
        }
        else
            carry = 0;
    }

    printf("Subtraction of two binary numbers: ");
    for (i = la - 1; i >= 0; i--)
        printf("%d", c[i]);
}

int main()
{
    char a[20], b[20];

    printf("Enter first binary number: ");
    scanf("%s", a);

    printf("Enter second binary number: ");
    scanf("%s", b);

    bin_Subtraction(a, b);

    return 0;
}
