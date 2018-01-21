/**
 * Basic class for generating random numbers for dice.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <emscripten/emscripten.h>

int main(int argc, char** argv) {
    printf("Starting WebAssembly module.\n");
    return 0;
}

/**
 * Generate a random number from 1 - 6.
 * EMSCRIPTEN_KEEPALIVE is used to tell EMCC to persist this function to make it available at any time.
 */
int EMSCRIPTEN_KEEPALIVE roll_dice() {
    srand(time(NULL));
    return rand() % 6 + 1;
}
