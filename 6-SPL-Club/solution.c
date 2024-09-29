#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "include/cslib.h"
#include "include/gevents.h"
#include "include/gmath.h"
#include "include/gobjects.h"
#include "include/gwindow.h"
#include "include/simpio.h"

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
