// Team with Star
#include <unistd.h>
void printnum(int n)
{
long long number = n;
if (number < 0)
{
   write(1, "-", 1);
   number = -number;
}
   char digit = (number % 10) + '0';
if (number >= 10)
    {
        printnum(number / 10);
    }
write(1, &digit, 1);
}
void compareints(int a, int b)
{
printnum(a);
if (a > b)
    {
        write(1, " is greater than ", 17);
    }
else if (a < b )
    { 
    write(1, " is smaller than ", 17);
}

else
{
    write(1, " is equal to ", 13);
}
printnum(b);
write(1, "\n", 1);
}
int main(void)
{
    compareints(7, 18);
    compareints(20, 10);
    compareints(5, 5);
    return 0;
}

