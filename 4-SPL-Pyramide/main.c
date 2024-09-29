#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "include/cslib.h"
#include "include/gevents.h"
#include "include/gmath.h"
#include "include/gobjects.h"
#include "include/gwindow.h"
#include "include/simpio.h"

int main(void) {
  GWindow gw = newGWindow(600, 400);
  pause(500);
  setColor(gw, "orange");
  fillOval(gw, 200, 100, 200, 200);

  /* Wait for a mouse click, close the window and terminate program */
  waitForClick();
  closeGWindow(gw);

  return 0;
}
