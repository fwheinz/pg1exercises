#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "include/cslib.h"
#include "include/gevents.h"
#include "include/gmath.h"
#include "include/gobjects.h"
#include "include/gwindow.h"
#include "include/simpio.h"


#define WIDTH 800
#define HEIGHT 600

#define BALLSIZE 30
#define GRAVITY 0.1
#define DAMPENING 0.8
#define SPEED 15

void bounceBall(GWindow gw) {
  double xs = 1, ys = 0;

  GOval ball = newGOval(0, 0, BALLSIZE, BALLSIZE);
  setColor(ball, "red");
  setFilled(ball, true);
  add(gw, ball);

  while (getX(ball) < WIDTH) {
    move(ball, xs, ys);
    ys += GRAVITY;
    if (getY(ball) > HEIGHT-BALLSIZE && ys > 0)
      ys = -(ys*DAMPENING);
    pause(SPEED);
  }
}

int main(void) {
  GWindow gw = newGWindow(WIDTH, HEIGHT);
  pause(500);

  bounceBall(gw);

  closeGWindow(gw);

  return 0;
}
