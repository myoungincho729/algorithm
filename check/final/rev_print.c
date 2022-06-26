#include <unistd.h>

int stlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *rev_print(char *str)
{
    int i;
    int len;

    i = 0;
    len = stlen(str);
    while (i < len)
    {
        write(1, &str[len - 1 - i], 1);
        i++;
    }
    return (str);
}

int	main(void)
{
	rev_print("rainbow dash");
	write(1, "\n", 1);
	rev_print("Ponies are awesome");
	write(1, "\n", 1);
	rev_print("");
	write(1, "\n", 1);
	return (0);
}