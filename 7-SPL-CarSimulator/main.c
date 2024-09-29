#include <stdio.h>
#include <string.h>
// We use full paths here to enable replit code introspection
#include "include/cslib.h"
#include "include/gevents.h"
#include "include/gmath.h"
#include "include/gobjects.h"
#include "include/gwindow.h"
#include "include/simpio.h"
#include "include/random.h"

/* Constants */
#define CAR_NUM 100
#define CAR_WIDTH 15
#define CAR_HEIGHT 5
#define WIDTH 600
#define HEIGHT 300
#define PAUSE_TIME 20
#define CAR_COLOR "CYAN"
#define MAX_SPEED 10

GRect cars [CAR_NUM];
int carSpeeds [CAR_NUM];

GWindow gw;

void setupCars (void) {
  // todo : create cars
}

void moveCars (void) {
  // todo : move cars
}

void drive (void) {
  while (1) {
    moveCars();
    pause (PAUSE_TIME);
  }
}

void setupCanvas (void) {
  gw = newGWindow (WIDTH, HEIGHT) ;
  fillRect (gw, 0, 0, WIDTH, HEIGHT) ; // draws a black background
}

int main (void) {
  setupCanvas();
  setupCars();
  drive();
  
  return 0;
}
