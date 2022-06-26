#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int flag;
    int ans;

    ans = 0;
    i = 0;
    flag = 1;
    while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
        i++;
    if (str[i] == '-')
    {
        flag *= -1;
        i++;
    }
    while (str[i] <= '9' && str[i] >= '0')
    {
        ans = ans * 10 + flag * (str[i] - '0');
        i++;
    }
    return (ans);
}

int main(void)
{
    printf("%d\n", ft_atoi("   -01"));
    return (0);
}