#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float amount = get_float("Kwacha amount: ");

    int pennies = amount * 100;
    printf("pennies: %i\n", pennies);
}