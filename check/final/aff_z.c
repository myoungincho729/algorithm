#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    char c;

    if (ac == 2)
    {
        i = 0;
        while (av[1][i])
        {
            if (av[1][i] == 'z')
            {
                c = av[1][i];
                write(1, &c, 1);
                break ;
            }
            i++;
        }
        write(1, "z", 1);
    }
    write(1, "\n", 1);
    return (0);
}