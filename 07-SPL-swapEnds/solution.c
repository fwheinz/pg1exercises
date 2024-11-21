#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "cslib.h"
#include "gevents.h"
#include "gmath.h"
#include "gobjects.h"
#include "gwindow.h"
#include "simpio.h"

void swapEnds (int a[], int size) {
  int t = a[size-1];
  a[size-1] = a[0];
  a[0] = t;
}
