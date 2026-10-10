/* Increment and decrement operators (prefix and postfix) */
#include <stdio.h>

int main()
{
    int a = 5, b = 5, c = 5, d = 5;

    printf("Initial value of a: %d\n", a);
    printf("Prefix Increment (++a): %d\n", ++a);

    printf("\nInitial value of b: %d\n", b);
    printf("Postfix Increment (b++): %d\n", b++);
    printf("Value of b after postfix increment: %d\n", b);

    printf("\nInitial value of c: %d\n", c);
    printf("Prefix Decrement (--c): %d\n", --c);

    printf("\nInitial value of d: %d\n", d);
    printf("Postfix Decrement (d--): %d\n", d--);
    printf("Value of d after postfix decrement: %d\n", d);

    return 0;
}
