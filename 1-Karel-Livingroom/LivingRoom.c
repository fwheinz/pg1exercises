/*
 * File: LivingRoomKarel.c
 * -----------------------------------------
 *
 * In this program, Karel simply climbs a cupboard and picks
 * a beeper on its way.
 *
 */

#include "karel.h"

void setup (void) {
    loadWorld("LivingRoom");
}

void run (void) {
    move();
    move();


}

