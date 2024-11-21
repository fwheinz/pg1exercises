#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "cslib.h"
#include "gevents.h"
#include "gmath.h"
#include "gobjects.h"
#include "gwindow.h"
#include "simpio.h"


int squirrelParty (int numCigars, int isWeekend) {
  if (numCigars >= 40 && (isWeekend || numCigars <= 60))
    return 1;
  else
    return 0;
}
