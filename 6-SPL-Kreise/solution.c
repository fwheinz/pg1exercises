#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "include/cslib.h"
#include "include/random.h"
#include "include/gevents.h"
#include "include/gmath.h"
#include "include/gobjects.h"
#include "include/gwindow.h"
#include "include/simpio.h"

#define WIDTH 700
#define HEIGHT 500

void randomCircle (GWindow gw) {
  int diameter = randomInteger(5, 100);
  int x = randomInteger(0, WIDTH-diameter);
  int y = randomInteger(0, HEIGHT-diameter);
  setColor(gw, "orange");
  fillOval(gw, x, y, diameter, diameter);
  setColor(gw, "black");
  drawOval(gw, x, y, diameter, diameter);
}

int main(void) {
  GWindow gw = newGWindow(WIDTH, HEIGHT);
  pause(500);

  for (int i = 0; i < 250; i++) {
    randomCircle(gw);
  }

  while (1) {
    GEvent e = waitForEvent(KEY_EVENT|KEY_TYPED);
    if (e != NULL && getKeyChar(e) == 'n')
      randomCircle(gw);
  }

  waitForClick();
  closeGWindow(gw);

  return 0;
}
