# Switch Statement

```
switch(x) {

  case constant1 :
    /* this code will be executed if x is equal to constant1 */;
    break;

  case constant2 :
    /* this code will be executed if x is equal to constant2 */;
    break;

  default :
    /* this code will be if x doesn't match any cases */;
}
```
The value of `x` is either an integer or a character in the above example. If the value of `x` matches constant in the specified cases above. If `x` doesn't match any of the above cases then the default code will be executed.

The break at the end of each case causes `switch` statement to exit. If break statement is not used, all statements below that case are also executed.

Credit for this goes to [programiz](http://www.programiz.com/c-programming/c-switch-case-statement).
