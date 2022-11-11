#include <stdio.h>
/**
 * It adds two numbers and subtracts the product of the two numbers
 *
 * @param a The first number
 * @param b the number of bits in the output
 *
 * @return a + b
 */
int add(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    /* code */
    int c = 4;
    // printf("Enter: ");
    scanf("%d", &c);
    printf("$Resultado: %d", add(4, 5));
    return 0;
}
