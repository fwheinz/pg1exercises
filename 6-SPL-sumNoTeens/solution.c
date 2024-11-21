#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "cslib.h"
#include "gevents.h"
#include "gmath.h"
#include "gobjects.h"
#include "gwindow.h"
#include "simpio.h"

int fixTeenAge (int n) {
  if ((n >= 13 && n <= 14) || (n >= 17 && n <= 19))
    return 0;
  else
    return n;
}

int sumNoTeens (int a, int b, int c) {
  return fixTeenAge(a) + fixTeenAge(b) + fixTeenAge(c);
}
