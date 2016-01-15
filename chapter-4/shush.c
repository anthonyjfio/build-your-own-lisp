/* This program will work on Windows or Arch Linux */

/* If on a different distribution of linux comment
 * out lines 21-24 and uncomment lines 26-28 */

#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <string.h>

char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* cpy = malloc(strlen(buffer)+1);
  strcopy(cpy, buffer);
  cpy[strlen(cpy)-1] = '\0';
  return cpy;
}

void add_history(char* unused) {}

#else
#include <editline/readline.h>
#include <histedit.h>

/* #else */
/* #include <editline/readline.h> */
/* #include <editline/history.h> */

#endif

int main(int argc, char** argv) {

  puts("Lippy Version 0.0.0.1");
  puts("Press Ctrl+c to exit\n");

  while (1) {

    char* input = readline("lippy>");

    add_history(input);
    printf("Shush ya %s\n", input);

    free(input);
  }

  return 0;
  
}
