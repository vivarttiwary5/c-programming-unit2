/* Nested if-else: determine the grade of a student based on marks */
#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 40)
    {
        if (marks >= 75)
        {
            printf("Grade: Distinction\n");
        }
        else
        {
            printf("Grade: Pass\n");
        }
    }
    else
    {
        printf("Grade: Fail\n");
    }

    return 0;
}
