#include <unistd.h>

void printnum(int n) { 
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

int main() {  
   int n = 2147483648;
   printnum(n);

}
