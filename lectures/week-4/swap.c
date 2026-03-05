
#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i \n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i \n", x, y);
}

// a function that swaps the position of a & b
// Passing by reference vs passing by value
// In the function below you can use a,b as parameters but
// this will only pass by value and the swap operation will only occur in
// the swap function and  x and y will remain the same (i.e operate on copies)
void swap(int *a, int *b)
{
    // the solution is to pass by reference by pointing to x and y in main,
    // now the result will bow point to where x and y are stored
    int tmp = *a;
    *a = *b;
    *b = tmp;
}