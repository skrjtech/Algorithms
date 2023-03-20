#include "Errors.h"

#include <stdio.h>
#include <stdlib.h>


void ERROR_INFO(char *funcname, char *message) {
    fprintf(stderr, "Error: %s: %s\n", funcname, message);
    exit(1);
}

void WARNING_INFO(char *funcname, char *message) {
    fprintf(stderr, "Warning: %s: %s\n", funcname, message);
}