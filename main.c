#include <stdio.h>
#include <stdlib.h>

int main() {

#ifdef __STDC_VERSION__
    printf("C Standard: %ld\n", __STDC_VERSION__);
#else
    printf("C Standard: Pre-ANSI C (C89)\n");
#endif

    return EXIT_SUCCESS;
}
