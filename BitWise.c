#include <stdio.h>


// This code defines a function getbits that extracts a specified number of bits from an unsigned integer x, starting from position p and extracting n bits. 

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n) & ~(~0 << n));
}

int main()
{    
    unsigned x = 52; // 110100
    int p = 4;
    int n = 3;
    printf("%d\n", getbits(x, p, n)); // 5, 101
}