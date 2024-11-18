/*
 * File: SteepleChaseKarel.c
 * -----------------------------------------
 *
 * In this program, Karel walks
 * from left to right in a world that is always 14 fields wide.
 * Whenever he encounters a hurdle, he has to jump over
 * the hurdle.
 *
 */

#include "karel.h"

void setup (void) {
    loadWorld("SteepleChase");
}

void run (void) {
    move();
}
