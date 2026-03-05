#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a"); // a struct for defining a file, it gives you the address to a ile you can perform 
    // operations with 
    // a - append to file
    // w - write to file (overwrites the contents of the file)

    if (file == NULL)
    {
        return 1;
    }

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file, "%s, %s\n", name, number);
    fclose(file);

    return 0;
}