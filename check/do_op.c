#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ope(int a, char c, int b)
{
    if (c == '+')
        return (a + b);
    if (c == '-')
        return (a - b);
    if (c == '*')
        return (a * b);
    if (c == '/')
        return (a / b);
    if (c == '%')
        return (a % b);
    return (0);
}

int main(int ac, char **av)
{
    char *n1s;
    char *n2s;
    int n1;
    int n2;
    int ans;

    if (ac == 4)
    {
        n1s = av[1];
        n2s = av[3];
        n1 = atoi(n1s);
        n2 = atoi(n2s);
        ans = ope(n1, av[2][0], n2);
        printf("%d", ans);
    }
    printf("\n");
    return (0);
}