#include <stdio.h>

int main(void)
{
    int n = 50;
    // %p is a placeholder for address location values, &<variable> is
    // the operator that allows memory addresses to be printed out instead
    // of regular values of variables
    printf("%p \n", &n); // output: 0x7ffc64071424, random hexadecimal value (memory address)
}
