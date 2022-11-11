#include <stdio.h>
/**
 * It adds two integers and returns the result
 *
 * @param a The first number to add
 * @param b The second number to add
 *
 * @return The sum of a and b.
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
