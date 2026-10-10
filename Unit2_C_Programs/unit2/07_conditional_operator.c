/* Conditional (ternary) operator: (condition) ? true_value : false_value */
#include <stdio.h>

int main()
{
    int a = 20, b = 15;
    int max = (a > b) ? a : b;

    printf("Maximum = %d\n", max);

    return 0;
}
