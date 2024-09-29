#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "include/gmath.h"

int lucky13 (int a[], int size) {
  for (int i = 0; i < size; i++) {
    if (a[i] == 1 || a[i] == 3)
      return 0;
  }
  return 1;
}
