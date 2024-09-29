#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "include/cslib.h"
#include "include/gevents.h"
#include "include/gmath.h"
#include "include/gobjects.h"
#include "include/gwindow.h"
#include "include/simpio.h"

void swapEnds (int a[], int size) {
  int t = a[size-1];
  a[size-1] = a[0];
  a[0] = t;
}
