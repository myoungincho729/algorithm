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
    char c;

    if (ac == 4 && stlen(av[2]) == 1 && stlen(av[3]) == 1)
    {
        i = 0;
        while (av[1][i])
        {
            if (av[1][i] == av[2][0])
                c = av[3][0];
            else
                c = av[1][i];
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}