#include <unistd.h>

int main(void)
{
    int i;
    char c;
    char d;

    i = 1;
    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz\n", 9);
        else if (i % 5 == 0)
            write(1, "buzz\n", 5);
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else
        {
            c = i / 10 + '0';
            d = i % 10 + '0';
            if (i >= 10)
                write(1, &c, 1);
            write(1, &d, 1);
            write(1, "\n", 1);
        }
        i++;
    }
    return (0);
}