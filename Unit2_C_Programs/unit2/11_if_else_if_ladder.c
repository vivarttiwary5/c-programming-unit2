/* if-else-if ladder: find the grade from marks */
#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 75) {
        printf("Grade: Distinction\n");
    } else if (marks >= 60) {
        printf("Grade: First Class\n");
    } else if (marks >= 40) {
        printf("Grade: Pass\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
