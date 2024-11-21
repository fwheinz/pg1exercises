#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "cslib.h"
#include "gevents.h"
#include "gmath.h"
#include "gobjects.h"
#include "gwindow.h"
#include "simpio.h"

int checkAdmission (int you, int date) {
  if (you >= 8 && date > 2)
    return 2;
  else if (you > 2 && date >= 8)
    return 2;
  else if (you <= 2 || date <= 2)
    return 0;
  else
    return 1;
}
