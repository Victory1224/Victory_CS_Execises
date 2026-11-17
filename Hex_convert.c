/* Team with Star */
#include <unistd.h>

void hexconvert(int n)
{
    char c;

    if (n >= 0 && n <= 9)
    {
        c = n + '0';
    }
    else if (n >= 10 && n <= 15)
    {
        c = (n - 10) + 'a';
    }
    else
    {
        return;
    }

    write(1, &c, 1);
}

int main(void)
{
    hexconvert(15);
    write(1, "\n", 1);
    return 0;
}