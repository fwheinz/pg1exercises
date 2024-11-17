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
//    loadWorld("flagDistance0");
    loadWorld("flagDistance1");
//    loadWorld("flagDistance2");
}

void run (void) {
	move();
    
}
