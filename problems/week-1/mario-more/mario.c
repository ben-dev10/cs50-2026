#include <cs50.h>
#include <stdio.h>

void print_row(int bricks, int spaces);

int main(void)
{
    int h;

    do
    {
        // question prompt
        h = get_int("Height: ");
    } while (h < 1 || h > 8);

    for (int col = 0; col < h; col++)
    {
        print_row(h - col, col + 1);
    }
}

void print_row(int spaces, int bricks)
{

    // left spaces
    for (int s = 0; s < spaces - 1; s++)
    {
        printf(" ");
    }

    // left bricks
    for (int row = 0; row < bricks; row++)
    {
        printf("#");
    }

    // middle gap
    printf("  ");

    // right bricks
    for (int row = 0; row < bricks; row++)
    {
        printf("#");
    }

    printf("\n");
}
