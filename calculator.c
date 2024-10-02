#include <stdio.h>

int main() {
    float a, b;
    int c;
    c = 0;

    while (c > 5 || c < 1) {
        printf("What would you like to do?\n");
        printf("1: add\n");
        printf("2: substract\n");
        printf("3: divide\n");
        printf("4: multiply\n");
        printf("5: quit\n");
        scanf("%d", &c);

        if (c == 5) {
            printf("Goodbye!\n");
            return 0;
        }
    }

    printf("Choose first and second number:\n");
    scanf("%f %f", &a, &b);

    switch (c) {
    case 1:
        printf("%f + %f = %f\n", a, b, a + b);
        break;
    case 2:
        printf("%f - %f = %f\n", a, b, a - b);
        break;
    case 3:
        while (b == 0) {
            printf("You can't divide by zero!\n");
            scanf("%f", &b);
        }
        printf("%f / %f = %f\n", a, b, a / b);
        break;
    case 4:
        printf("%f * %f = %f\n", a, b, a * b);
        break;
    }

    return 0;
}
