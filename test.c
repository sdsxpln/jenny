#include <unistd.h>

#include "jenny.h"

int main(void) {
    int this_is_an_int = 20;
    char *this_is_a_string = "\"abc\n\t\\123";
    jenny_t test[] =
    #include "test.jenny.c"
    jenny(test, write, STDOUT_FILENO);

    return 0;
}