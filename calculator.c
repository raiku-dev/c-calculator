#include <stdio.h>

int main() {
  int a, b, c;
  c = 0;

  while (c > 4 || c < 1) {
    printf("What would you like to do?\n");
    printf("1: add\n");
    printf("2: substract\n");
    printf("3: divide\n");
    printf("4: multiply\n");
    printf("5: quit\n");
    scanf("%d", &c);
  }

  printf("Choose first and second number:\n");
  scanf("%d %d", &a, &b);

  if (c == 5) {
    return 0;
  }

  if (c == 1) {
    printf("%d + %d = %d\n", a, b, a + b);
  } else if (c == 2) {
    printf("%d - %d = %d\n", a, b, a - b);
  } else if (c == 3) {
    printf("%d / %d = %d\n", a, b, a / b);
  } else if (c == 4) {
    printf("%d * %d = %d\n", a, b, a * b);
  }

  return 0;
}
