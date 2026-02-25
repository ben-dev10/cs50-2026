#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person people[3];

    people[0].name = "Kelly";
    people[0].number = "+1-617-495-1000";

    people[0].name = "David";
    people[0].number = "+1-617-495-1000";

    people[0].name = "John";
    people[0].number = "+1-949-468-2750";

    string s = get_string("String: ");

    for (int i = 0; i < 3; i++)
    {
        if ((strcmp(people[i].name, s)) == 0)
        {
            printf("Found %s \n", people[i].number);
            return 0;
        }
    }

    printf("Not found \n");
    return 1;
}