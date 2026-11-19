// Team with Star
#include <unistd.h>

void Bin_To_Hex(int n)
{
    char hex[] = "0123456789abcdef";
    char result[10];
    int check = n;
    int count = 0;
    int value, power, i;

    if (n < 0)
    {
        write(1, "Error: not base 2\n", 18);
        return;
    }

    while (check > 0)
    {
        if (check % 10 > 1)
        {
            write(1, "Error: not base 2\n", 18);
            return;
        }
        check = check / 10;
    }

    do
    {
        value = 0;
        power = 1;

        for (i = 0; i < 4; i++)
        {
            value = value + (n % 10) * power;
            n = n / 10;
            power = power * 2;
        }

        result[count] = hex[value];
        count++;

    } while (n > 0);

    while (count > 0)
    {
        count--;
        write(1, &result[count], 1);
    }

    write(1, "\n", 1);
}

int main(void)
{
    Bin_To_Hex(10101111);
    Bin_To_Hex(0);
    Bin_To_Hex(10201);

    return 0;
}