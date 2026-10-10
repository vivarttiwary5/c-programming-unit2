/* do-while: menu-driven program (menu runs at least once) */
#include <stdio.h>

int main()
{
    int choice, a, b;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
        }

        switch (choice) {
            case 1: printf("Sum = %d\n", a + b); break;
            case 2: printf("Difference = %d\n", a - b); break;
            case 3: printf("Product = %d\n", a * b); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    }
    while (choice != 4);

    return 0;
}
