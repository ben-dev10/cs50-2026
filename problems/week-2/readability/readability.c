#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

int count_letters(const char *text);
int count_words(const char *text);
int count_sentences(const char *text);

int main(void)
{
    char *s = get_string("Text: ");

    int letters = count_letters(s);
    int words = count_words(s);
    int sentences = count_sentences(s);

    float L = ((float)letters / words) * 100;
    float S = ((float)sentences / words) * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_letters(const char *text)
{
    int count = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
    }

    return count;
}

int count_words(const char *text)
{
    int count = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] != ' ' && (i == 0 || text[i - 1] == ' '))
        {
            count++;
        }
    }

    return count;
}

int count_sentences(const char *text)
{
    int count = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }

    return count;
}