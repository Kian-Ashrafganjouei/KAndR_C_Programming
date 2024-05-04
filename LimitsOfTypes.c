#include <limits.h>
#include <stdio.h>

int main() {
    printf("Maximum value of int: %d\n", INT_MAX);
    printf("Maximum value of char: %d\n", CHAR_MAX);
    printf("Maximum value of short: %d\n", SHRT_MAX);
    printf("Maximum value of long: %ld\n", LONG_MAX);

    int bits = sizeof(int) * 8;
    int max_int = (1 << (bits - 1)) - 1;
    int min_int = -(1 << (bits - 1));

    printf("Range of int: %d to %d\n", min_int, max_int);

    return 0;
}