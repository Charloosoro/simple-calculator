// calculator to return all values of addition, subtraction, multiplication, division, and modulus
// of two numbers
#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;
    printf("%d + %d = %d\n", a, b, c);
    printf("%d - %d = %d\n", a, b, d);
    printf("%d * %d = %d\n", a, b, e);
    printf("%d / %d = %d\n", a, b, f);
    printf("%d %% %d = %d\n", a, b, g);
    return 0;
}