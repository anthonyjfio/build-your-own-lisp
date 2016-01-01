
### Integer Types

Type | Storage Size | Value Range |
-----|--------------|-------------|
char | 1 byte | -128 to 127 or 0 to 255 |
unsigned char | 1 byte | 0 to 255 |
signed char | 1 byte | -128 to 127 |
int | 2 or 4 bytes | -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647 |
unsigned int | 2 or 4 bytes | 0 to 65,535 or 0 to 4,294,967,295 |
short | 2 bytes | -32,768 to 32,767 |
unsigned short | 2 bytes | 0 to 65,535 |
long | 4 bytes | -2,147,483,648 to 2,147,483,647 |
unsigned long | 4 bytes | 0 to 4,294,967,295 |

### Floating Point Types

Type | Storage Size | Value Range | Precision |
-----|--------------|-------------|-----------|
float | 4 bytes | 1.2E-38 to 3.4E+38 | 6 decimal places |
double | 8 byte | 2.3E-308 to 1.7E+308 | 15 decimal places |
long double | 10 byte | 3.4E-4932 to 1.1E+4932 | 19 decimal places |

### The Void Type

Situation | Types & Description |
----------|---------------------|
1 | **Function returns as void**
There are various functions in C which do not return any value or you can say they return void. A function with no return value has the return type as void. for example, `void exit (int status);`. |
2 | **Function arguments as void**
There are various functions in C which do not accept any parameter. A function with no parameter can accept a void. For example, `int rand(void);`. |
3 | **Pointers to void**
A pointer of the type void * represents the address of an object, but does not its type. For example, a memorey allocation function `void *malloc( size_t size );` returns a pointer to void which can be casted to any data type. |


Credit goes to this Tutorials point [article](http://www.tutorialspoint.com/cprogramming/c_data_types.htm).
