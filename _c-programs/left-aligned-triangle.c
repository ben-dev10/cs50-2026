#include <cs50.h>
#include <stdio.h>

void print_row(int bricks);

int main(void)
{
    int n;
    do
    {
        // height of pyramid
        n = get_int("Height of pyramid? ");
    } while (n < 1);

    // print cols and rows
    for (int col = 0; col < n; col++)
    {
        print_row(col + 1);
    }
}

void print_row(int bricks)
{
    for (int row = 0; row < bricks; row++)
    {
        printf("#");
    }
    printf("\n");
}