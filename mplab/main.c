/* 
 * File:   main.c
 * Author: JDG
 * Company: Handmade Electronics
 * Website: https://HandmadeElectronics.com
 * email: owner@HandmadeElectronics.com
 * 
 * Program developed with MPLAB X IDE v5.40 available here:
 * https://www.microchip.com/en-us/development-tools-tools-and-software/mplab-x-ide#
 *
 * Intended for use on an ATMEGA328P microprocessor
 * 
 * Github Repository located here:
 * https://github.com/Handmade-Electronics/2021-Star-PCB-Christmas-tree-ornament
 * 
 * Created on January 18, 2021, 4:09 PM
 */

#include <stdio.h>
#include <stdlib.h>

//layout of LEDs in rings around PCB. Ring0 is the innermost. ring5 is the tips.
#define ring0 {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30}
#define ring1 {34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55}
#define ring2 {56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75}
#define ring3 {76,77,78	79,80,81,82,83,84,85,86,87,88,89,90}
#define ring4 {91,92,93,94,95,96,97,98,99,100}
#define ring5 {101,102,103,104,105}

//layout of LEDs by each Star point
#define segment0 { 1, 2, 3, 4, 5, 6,31,41,33,34,35,56,57,58,59,76,77,78,91, 92,101}
#define segment1 { 7, 8, 9,10,11,12,36,37,38,39,40,60,61,62,63,79,80,81,93, 94,102}
#define segment2 {13,14,15,16,17,18,41,42,43,44,45,64,65,66,67,82,83,84,95, 96,103}
#define segment3 {19,20,21,22,23,24,46,47,48,49,50,68,69,70,71,85,86,87,97, 98,104}
#define segment4 {25,26,27,28,29,30,51,52,53,54,55,72,73,74,75,88,89,90,99,100,105}

#define ring {ring0,ring1,ring2,ring3,ring4,ring5}
#define segment {segment0,segment1,segment2,segment3,segment4}

/*
 * 
 */
int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

