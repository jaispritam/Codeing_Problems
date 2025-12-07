/*5.1 Question

Write a program to determine whether a given number is ‘odd’ or ‘even’ and print the message:

NUMBER IS EVEN
or
NUMBER IS ODD


(a) without using else option, and
(b) with else option
*/

// Answer

// (a) Without using else

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("NUMBER IS EVEN\n");

    if (num % 2 != 0)
        printf("NUMBER IS ODD\n");

    return 0;
}

// (b) Using else
#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("NUMBER IS EVEN\n");
    else
        printf("NUMBER IS ODD\n");

    return 0;
}
