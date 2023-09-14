/*

Alejandro Silva
setenv.c

Simple setenv command. 

*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "printenv.h"

int my_setenv (int argc, char *argv[]) {

    if (argc < 2) {

        char *empty_args[] = { NULL };
        printenv(1, empty_args);
        return 0;

    } else if (argc == 2) {

        setenv(argv[1], "", 1);
        return 0;

    } else if (argc == 3) {

        setenv(argv[1], argv[2], 1);
        return 0;

    } else {

        errno = E2BIG;
        return -1;

    }
}
