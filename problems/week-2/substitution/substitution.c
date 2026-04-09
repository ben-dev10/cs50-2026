#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

bool valid_key(string key);
char encrypt(char c, string key);

int main(int argc, char *argv[])
{
    // Ensure exactly one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    char *key = argv[1];

    // Validate key
    if (!valid_key(key))
    {
        return 1;
    }

    char *plain_text = get_string("plaintext: ");

    printf("ciphertext: ");

    for (int i = 0, n = strlen(plain_text); i < n; i++)
    {
        printf("%c", encrypt(plain_text[i], key));
    }

    printf("\n");
    return 0;
}

char encrypt(char c, char *key)
{
    if (isupper(c))
    {
        int index = c - 'A';
        return toupper(key[index]);
    }
    else if (islower(c))
    {
        int index = c - 'a';
        return tolower(key[index]);
    }
    else
    {
        return c;
    }
}

bool valid_key(string key)
{
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return false;
    }

    // Check alphabetic characters and duplicates
    bool seen[26] = {false};

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Key must only contain alphabetic characters.\n");
            return false;
        }

        int index = toupper(key[i]) - 'A';

        if (seen[index])
        {
            printf("Key must not contain repeated characters.\n");
            return false;
        }

        seen[index] = true;
    }

    return true;
}
