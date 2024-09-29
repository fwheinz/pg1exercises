/*
 * File: HelloKarel.c
 * --------------------------------
 * The HelloKarel program is a simple
 * program to demonstrate a minimal working
 * Karel example.
 * 
 */

#include "karel.h"

void setup (void) {
//    loadWorld("DamagedPillar1");
    loadWorld("DamagedPillar2");
}

void run (void) {
	move();
}
