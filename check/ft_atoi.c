#include <stdlib.h>
#include <stdio.h>

int check(const char *str)
{
    int i;

    i = 0;
    while (str[i] && ((str[i] <= 13 && str[i] >= 9) || str[i] == 32))
        i++;
    while (str[i] && (str[i] == '+' || str[i] == '-'))
        i++;
    if (str[i] <= '9' && str[i] >= '0')
        return (i);
    return (-1);
}

int cal(const char *str, int idx, int m)
{
    int ans;

    ans = 0;
    while (str[idx] && (str[idx] >= '0' && str[idx] <= '9'))
    {
        ans = ans * 10 + m * (str[idx] - '0');
        idx++;
    }
    return (ans);  
}

int ft_atoi(const char *str)
{
    int i;
    int j;
    int m;
    int ans;

    i = check(str);
    if (i == -1)
        return (0);
    j = 0;
    m = 1;
    while (j < i)
    {
        if (str[j] == '-')
            m *= -1;
        j++;
    }
    ans = cal(str, i, m);
    return (ans);
}

int main(void)
{
    printf("%d\n",ft_atoi("1234"));
    printf("%d\n",ft_atoi("\n-1234"));
    printf("%d\n",ft_atoi(""));
    printf("%d\n",ft_atoi("12+34"));
    printf("%d\n",ft_atoi(" + -+001234"));
    printf("%d\n",ft_atoi("   1234"));
}