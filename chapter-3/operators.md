# Operators

### Arithmetic Operators

| Operator | Description | Example |
|----------|-------------|---------|
| `+` | Adds two operands | `A + B = 30` |
| `-` | Subtracts second operand from the first | `A - B = 10` |
| `*` | Multiplies both operands | `A * B = 200` |
| `/` | Divides numberator by de-numerator | `B / A = 2` |
| `%` | Modulus Operator and the remainder of after an integer division | `B % A = 0` |
| `++` | Increment operator increases the integer value by one | `A++ = 11` |
| `--` | Decrement operator decreases the integer value by one | `A-- = 9` |

### Relational Operators


| Operator | Description | Example |
|----------|-------------|---------|
| `==` | Checks if the values of two operands are equal or not. If yes, then the condition becomes true. | `(A == B)` is not true |
| `!=` | Checks if the values of two operands are equal or not. If the values are not equal, then the condition beccomes true. | `(A != B)` is true |
| `>` | Checks if the value of the left operand is greater than the value of the right operand. If yes, then the condition becomes true. | `(A > B)` is not true |
| `<` | Checks if the value of the left operand is less than the value of the right operand. If yes, then the condition becomes true. | `(A < B)` is true |
| `>=` | Checks if the value of the left operand is greater than or equal to the value of the right operand. If yes, then the condition becomes true. | `(A >= B)` is not true |
| `<=` | Checks if the value of the the left operand is less than or equal to the value of the right operand. If yes, then the condition becomes true. | `(A <= B)` is true |

### Logical Operators

| Operator | Description | Example |
|----------|-------------|---------|
| `&&` | Called logical **and** operator. If bothe the operands are non-zero, then the condition becomes true. | `(A && B)` is false |
| `||` | Called logical **or** operator. If any of the two ooperands in non-zero, then the condition becomes true. | `(A || B)` is true |
| `!` | Called logical **not** operator. It is used to reverse the logical state of its operand. If a condition is true, then the logical NOT operator will make it false. | `!(A && B)` is true |

### Bitwise Operators


| Operator | Description | Example |
|----------|-------------|---------|
| `&` | Binary **and** operator copies a bit to the result if it exists in both operands. | `(A & B) = 12` i.e. `00001100` |
| `|` | Binary **or** operator copies a bit if it esists in either operand. | `(A | B) = 61` i.e. `00111101` |
| `^` | Binary **xor** operator copies the bit if it is set in one operand but not both. | `(A ^ B) = 49` i.e. `00110001` |
| `~` | Binary ones **complement** operator is unary and has the effect of 'flipping' bits. | `(~A) = -61` i.e. `11000011` in 2's complement form |
| `<<` | Binary **left shift** operator. The left operands value is moved left by the number of bits specified by the right operand. | `A << 2 = 240` i.e. `11110000` |
| `>>` | Binary **right shift** operator. The left operands value is moved right by the number of bits specified by the right operand. | `A >> 2 = 15` i.e. `00001111` |

### Assignment Operators

| Operator | Description | Example |
|----------|-------------|---------|
| `=` | Simple assignment operator. Assigns values from right side operands to left side operand | `C = A + B` will assign the value of `A + B` to `C` |
| `+=` | Add `and` assignment operator. It adds the right operand to the left operand and assigns the result to the left operand. | `C += A` is equivalent to `C = C + A` |

### Misc Operators ↦ sizeof & ternary

| Operator | Description | Example |
|----------|-------------|---------|

### OPerators Precedence in C

| Category | Operator | Associativity |
|----------|----------|---------------|


Credit goes to this Tutorials point [article](http://www.tutorialspoint.com/cprogramming/c_operators.htm).

