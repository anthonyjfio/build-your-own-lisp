# C Preprocessor

### `#ifndef`

`#ifndef` detects if the condition is true and if it is it will include the nested code in your program.

This is the same as `#ifdef` and `if`.

###### Example
```
#ifndef MACRO

  controlled text

#endif
```

Replace `MACRO` with your condition.

### `#define`

`#define` will replace the desired text with the replacement token.

```
#define <identifier> <replacement token>
```

###### Example
```
#define PI 3.14159
```

### Operating systems

Windows: `_WIN32`

Unix: `UNIX`

Mac: `APPLE`

Linux: Try `LINUX` if that doesn't work see work around [here](http://www.openguru.com/2009/04/cmake-detecting-platformoperating.html).
