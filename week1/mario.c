#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);
void print_bricks(int bricks);

int main(void)
{
    int n;
    const int max = 8;
    do
    {
        // Prompt the user for the pyramid's height
        n = get_int("Type a positive number: ");
    }

    while (n < 1 || n > max);

    for (int i = 0; i < n; i++)
    {
        // Print row
        print_row(n - i - 1, i + 1);
    }
}

void print_row(int spaces, int bricks)
{
    // Space before first block
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // First block
    print_bricks(bricks);

    // Gap
    printf("  ");

    // second block
    print_bricks(bricks);

    printf("\n");
}

void print_bricks(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
}
