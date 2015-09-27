/* 
 * File:   main.c
 * Author: nigonzalez
 *
 * Created on January 13, 2015, 8:48 PM
 */

#include <stdlib.h>
#include "e_epuck_ports.h"
#include "e_init_port.h"

void waitMillis(long millis) {
    long i;
    long wait = millis * 1500;
    for (i = 0; i < wait; ++i);
}

int main(void) {
    e_init_port();
    while (1) {
        LED0 = LED0 ^ 1;
        waitMillis(1000);
    }
    return (EXIT_SUCCESS);
}