# What happens when you pass `printf` a variable that does not match the pattern?

The compilier will throw an error similar in spirit to the one below.

###### Example Code
```
#include <stdio.h>

int main() {
  printf("%y", 8);
  return 0;
}
```

###### Example Output from Compilier
```
warning: unknown conversion type character
```


