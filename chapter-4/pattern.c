#include <stdio.h>

int main() {
  printf("Alarm Bell \aAlarm Bell \n");
  printf("Backspace \bBackspace \n");
  printf("Formfeed \fFormfeed \n");
  printf("Newline \nNewline \n");
  printf("Carriage Return \rCarriage Return \n");
  printf("Horizontal Tab \tHorizontal Tab \n");
  printf("Vertical Tab \vVertical Tab \n");
  printf("Backslash \\Backslash \n");
  printf("Single Quotation Mark \'Single Quotation Mark \n");
  printf("Double Quotation Mark \"Double Quotation Mark \n");
  printf("Question Mark \?Question Mark \n");
  printf("Numerical value as octal \6 Numerical value as octal\n");
  printf("Numerical value as hexadecimal \x34 Numerical value as hexadecimal\n");

  printf("%a \n", 55.123456789101112131415);
  printf("%d \n", 3);
  printf("%c \n", 5);
  printf("%e \n", 55.123456789101112131415);
  printf("%f \n", 55.123456789101112131415);
  printf("%g \n", 55.123456789101112131415);
  printf("%o \n", 55);
  printf("%s \n", "hi");
  printf("%u \n", 59);
  printf("%x \n", 608802);
  printf("%% \n");
  return 0;
}
