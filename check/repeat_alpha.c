#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    char j;

    if (ac == 2)
    {
        i = 0;
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                j = 'a';
                while (j <= av[1][i])
                {
                    write(1, &av[1][i], 1);
                    j++;
                }
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}