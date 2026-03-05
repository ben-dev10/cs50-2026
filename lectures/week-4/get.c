#include <stdio.h>

int main(void)
{
    /*
        Simplified cs50 get_int implementation
    */
    int n;

    printf("n: ");        // prompt
    scanf("%i", &n);      // function to get user input
    printf("n: %i\n", n); // print out value of n

    /* Partially implemented get_string, it doesn't standardize
    dynamic memory allocation, there should be a clear limit for how large
    s can be
    */
    char *s; // no allocation
    // char s[5]; // allocate 5 bytes (5 characters as an array)
    // *s = malloc(4); // same as ☝️

    printf("s: ");  // prompt
    scanf("%s", s); // no & here because it has been allocated memory already
    printf("s: %s\n", s);
}