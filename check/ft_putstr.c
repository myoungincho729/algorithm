#include <unistd.h>
#include <string.h>
void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int main(void)
{
    char c[10] = "agasggg";
    ft_putstr(c);
    return (0);
}