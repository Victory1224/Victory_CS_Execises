// Individual work by Victory

#include <unistd.h>

void printnum(int n)
{
    long long number = n;
    char digit;

    if (number < 0)
    {
        write(1, "-", 1);
        number = -number;
    }

    if (number >= 10)
    {
        printnum(number / 10);
    }

    digit = (number % 10) + '0';
    write(1, &digit, 1);
}

void Swap_Int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printnum(*a);
    write(1, " ", 1);
    printnum(*b);
    write(1, "\n", 1);
}

int main(void)
{
    int a = 7;
    int b = 18;

    Swap_Int(&a, &b);

    return 0;
}