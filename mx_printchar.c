#include <unistd.h>

void mx_printchar(char h) {
    write(1, &h, 1);
}

