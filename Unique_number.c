#include <stdio.h>
#include <stdbool.h>

bool is_unique(int num) {
  int digits[10] = {0};
  while (num > 0) {
    int digit = num % 10;
    if (digits[digit] == 1) {
      return false;
    }
    digits[digit] = 1;
    num /= 10;
  }
  return true;
}

int main(void) {
  int num;
  scanf("%d", &num);
  if (is_unique(num)) {
    printf("Unique Number
");
  } else {
    printf("Not Unique Number
");
  }
  return 0;
}
