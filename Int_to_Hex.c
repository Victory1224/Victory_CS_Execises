// Team with Star

#include <unistd.h>

void hexconvert(int n)
{
    char c;

    if (n < 10)
    {
        c = n + '0';
    }
    else
    {
        c = (n - 10) + 'a';
    }

    write(1, &c, 1);
}

void Int_To_Hex(int n)
{
    long long number = n;

    if (number < 0)
    {
        write(1, "-", 1);
        number = -number;
    }

    if (number >= 16)
    {
        Int_To_Hex(number / 16);
    }

    hexconvert(number % 16);
}

int main(void)
{
    Int_To_Hex(255);
    write(1, "\n", 1);

    Int_To_Hex(-26);
    write(1, "\n", 1);

    return 0;
}