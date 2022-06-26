#include <unistd.h>
int stlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int i;
    int len;

    if (ac == 2)
    {
        len = stlen(av[1]);
        i = 0;
        while (av[1][i])
        {
            write(1, &av[1][len - 1 - i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}