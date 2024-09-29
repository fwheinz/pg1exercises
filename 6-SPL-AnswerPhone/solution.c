#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "include/cslib.h"
#include "include/gevents.h"
#include "include/gmath.h"
#include "include/gobjects.h"
#include "include/gwindow.h"
#include "include/simpio.h"


/*
 Assumes all inputs are either 0 ( false ) or 1 ( true ) .
 Returns 1 if we answer the phone .
*/
int answerPhone (int isMorning, int isMom, int isSleeping) {
  if (!isSleeping && (!isMorning || isMom))
    return 1;
  else
    return 0;
}
