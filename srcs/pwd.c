/*

Pwd command.

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void pwd () {

    char *ptr = getcwd(NULL, 0);
    if (ptr != NULL) {
        printf("%s\n", ptr);
    } else {
        perror("[pwd] Error");
    }
    free(ptr);

}

