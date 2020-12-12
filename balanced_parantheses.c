#include <stdbool.h>
#include <stdio.h>

bool validParentheses(const char *s) {
  int stack = 0;
  while (*s != '\0') {
    if (*s == '(') {
      stack++;
    }
    if (*s == ')') {
      stack--;
    }
    if (stack < 0) {
      return false;
    }
    s++;
  }
  return stack ? false : true;
}
