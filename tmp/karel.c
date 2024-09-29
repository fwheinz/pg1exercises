/*
 * File: DiamondMiningKarel.c
 * -----------------------------------------
 *
 * Karel wants to mine diamonds. He searches all mines in his worlds and
 * collects the diamonds he finds there.
 *
 */

#include "karel.h"

void setup(void) {
  //    loadWorld("DiamondMining1");
  loadWorld("DiamondMining2");
}

void run(void) {
  move();
}
