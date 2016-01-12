# Typedef

```
typedef int points;

points high_score;
points your_score;

void congratulate() {
  if (your_score > high_score) {
    /* code executes */
  }
}
```

The purpose of `typedef` is to form complex types from more-basic machine types and assign simpler names to such combinations. Ther are most often used when a standard definition or declaration is cumbersome, potentially confusing, or likely to vary from one implementation to another.

