#include <stdio.h>

typedef unsigned char BYTE;

/**
 *  A simple program to copy a given file (byte by byte)
 *
 * @param {string} argv[0] - commandline argument for the name of the current program
 * @param {string} argv[1] - commandline argument for the first user input
 * @param {string} argv[2] -  commandline argument for the second user input, and so on
 * 
 * @example Copies phonebook.csv to copy.csv
 *  ```bash
 *      ./cp phonebook.csv copy.csv
 * ```
 */
int main(int argc, char *argv[])
{
    FILE *src = fopen(argv[1], "rb"); // memory address to source file in binary read (rb)
    FILE *dst = fopen(argv[2], "wb"); // memory address to source file in binary read (rb)

    BYTE b;

    while (fread(&b, sizeof(b), 1, src) != 0)
    {
        fwrite(&b, sizeof(b), 1, dst);
    }
}
