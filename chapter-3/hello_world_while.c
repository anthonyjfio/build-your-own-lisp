#include <stdio.h>

int main () {

  int i = 0;

  while (i < 5) {
    puts("Hello World!");
    i = i + 1;
    
    if (i == 5) {
      return 0;
    }
  }

}
