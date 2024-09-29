#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "include/cslib.h"
#include "include/gevents.h"
#include "include/gmath.h"
#include "include/gobjects.h"
#include "include/gwindow.h"
#include "include/simpio.h"

#define W 200
#define H 200

GWindow gw;

void fillCircle (GWindow gw, int x, int y, int r) {
  int nx = x - r;
  int ny = y - r;
  int w = 2*r;
  int h = 2*r;
  fillOval(gw, nx, ny, w, h);
}

int main(void) {
  gw = newGWindow(W, H);
  pause(500);
  setColor(gw, "orange");
  fillCircle(gw, W/2, H/2, 50);
  /* Wait for a mouse click, close the window and terminate program */
  waitForClick();
  closeGWindow(gw);

  return 0;
}
