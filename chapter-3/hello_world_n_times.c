#include <stdio.h>

int main () {

  int n;
  puts("Please give me a postive number greater than 0");
  scanf("%d", &n);

  if (n < 0) {
    puts("That wasn't a positive number, please re-run and give me a positive integer");
  }

  else if (n == 0) {
    puts("That was 0, please re-run and give me a positive number greater than 0");
  }

  else {
    for (int i = 0; i < n; i++) {
      puts("Hello World!");
    }
  }

  return n;

}
