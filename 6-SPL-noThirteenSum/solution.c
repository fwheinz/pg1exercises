#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "include/cslib.h"
#include "include/gevents.h"
#include "include/gmath.h"
#include "include/gobjects.h"
#include "include/gwindow.h"
#include "include/simpio.h"


int noThirteenSum (int a, int b, int c) {
  if (a == 13)
    return 0;
  else if (b == 13)
    return a;
  else if (c == 13)
    return a+b;
  else
    return a+b+c;
}
