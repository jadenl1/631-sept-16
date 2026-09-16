#include <stdio.h>
#include "Add.h"

int main(void)
{
    double first, second;

    printf("Enter first number: ");
    fflush(stdout);
    if (scanf("%lf", &first) != 1) {
        fprintf(stderr, "Error: enter a valid number.\n");
        return 1;
    }

    printf("Enter second number: ");
    fflush(stdout);
    if (scanf("%lf", &second) != 1) {
        fprintf(stderr, "Error: enter a valid number.\n");
        return 1;
    }

    printf("Result: %g\n", add(first, second));
    return 0;
}
