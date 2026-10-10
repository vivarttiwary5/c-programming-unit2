/* Assignment operators: =  +=  -=  *=  /=  %= */
#include <stdio.h>

int main()
{
    int a = 10;

    printf("Initial value of a = %d\n", a);

    a += 5;   /* a = a + 5 -> 15 */
    printf("After a += 5: %d\n", a);

    a -= 3;   /* a = a - 3 -> 12 */
    printf("After a -= 3: %d\n", a);

    a *= 2;   /* a = a * 2 -> 24 */
    printf("After a *= 2: %d\n", a);

    a /= 4;   /* a = a / 4 -> 6 */
    printf("After a /= 4: %d\n", a);

    a %= 4;   /* a = a % 4 -> 2 */
    printf("After a %%= 4: %d\n", a);

    return 0;
}
