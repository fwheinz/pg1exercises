#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "include/cslib.h"
#include "include/gevents.h"
#include "include/gmath.h"
#include "include/gobjects.h"
#include "include/gwindow.h"
#include "include/simpio.h"


int squirrelParty (int numCigars, int isWeekend) {
  if (numCigars >= 40 && (isWeekend || numCigars <= 60))
    return 1;
  else
    return 0;
}
