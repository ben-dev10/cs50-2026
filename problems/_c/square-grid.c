#include <cs50.h>
#include <stdio.h>

void print_row(int bricks);

int main(void)
{
    int n;
    // repeated questioning
    do
    {
        n = get_int("Number of bricks? ");
    } while (n < 1);

    // print cols and rows
    for (int col = 0; col < n; col++)
    {
        print_row(n);
        printf("\n");
    }
}

void print_row(int bricks)
{
    for (int row = 0; row < bricks; row++)
    {
        printf("#");
    }
}