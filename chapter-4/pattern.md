# `printf` Patterns

### Conversion Characters for `printf`
| Character | Description |
|-----------|-------------|
| `%a` | Prints any Darwin value including lists and sets |
| `%c` | Prints a single character |
| `%d` | Prints and integer |
| `%e` | Prints a number in exponential notation |
| `%f` | Prints a real number |
| `%g` | Prints a real number in the same manner as the `%e` character if the exponent is greater than 8. Otherwise equivalent to the `%f` or `%d` characters. |
| `%o` | Prints the octal conversion of an integer |
| `%s` | Prints the item of type `name` |
| `%u` | Prints an unsigned integer |
| `%x` | Prints the hexadecimal conversion of an integer |
| `%%` | Prints a percent sign `%` |

###### Example Usage
```
#include <stdio.h>

int main() {
  printf("%d \n", 3);
  return 0;
}
```
###### Example Output
```
3
```

### Escape Sequences
| Escape Sequence | Description |
|-----------------|-------------|
| `\a` | Alarm (Beep, Bell) |
| `\b` | Backspace |
| `\t` | Horizontal Tab |
| `\n` | Newline |
| `\v` | Vertical Tab |
| `\f` | Formfeed |
| `\r` | Carriage Return |
| `\"` | Double Quotation Mark |
| `\'` | Single Quotation Mark |
| `\?` | Question Mark |
| `\\` | Backslash |
| `\xhh` | The character whose numerical value is given by `hh` interpreted as a hexadecimal number |
| `\nnn` | The character whose numerical value is given by `nnn` interpreted as an octal number |

###### Example Usage
```
#include <stdio.h>

int main() {
  printf("Backspace \bBackspace \n");
  return 0;
}
```
###### Example Output
```
BackspaceBackspace
```
