/* goto: unconditional jump to a label */
#include <stdio.h>

int main()
{
    printf("Welcome to C Programming\n");

    goto end;

    printf("This statement will not be executed.\n");

end:
    printf("Thank You!\n");

    return 0;
}
