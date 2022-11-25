#include <stdio.h>
//#include <cs50.h>

int main(void)
{
    int height = get_string("Height: ");

    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1;)
        {
            printf("#");
        }
        printf("\n");
    }
}