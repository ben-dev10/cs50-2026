#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    int h;
    do
    {
        // height of pyramid
        h = get_int("Height: ");
    } while (h < 1 || h > 8);

    // print cols and rows
    for (int col = 0; col < h; col++)
    {
        print_row(h - col, col + 1);
    }
}

void print_row(int spaces, int bricks)
{

    // print spaces
    for (int s = 0; s < spaces - 1; s++)
    {
        printf("-");
    }

    // print brick row
    for (int row = 0; row < bricks; row++)
    {
        printf("#");
    }
    printf("\n");
}