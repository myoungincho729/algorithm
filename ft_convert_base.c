#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_in_base(char c, char *str)
{
    int i = 0;
    while (str[i])
    {
        if (c == str[i])
            return (i);
        i++;
    }
    return (-1);
}

int term(char *str)
{
    int i = 0;
    while (is_in_base(str[i] == -1))
    {
        if ((str[i] >= 9 && str[i] <= 12) || str[i] == 32)
            i++;
        else if (str[i] == '+' || str[i] == '-')
            break;
        else
            return (-1);       
    }
    while (is_in_base(str[i] == -1))
    {
        if (str[i] == '-' || str[i] == '+')
            i++;
        else
            return (-1);           
    }
    return (i);
}

int check_base(char *base)
{
    int i;
    int j;

    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-')
            return (0);
        j = 0;
        while (j < i)
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    if (i <= 2)
        return (0);
    return (1);
}

int cal(char *str, char *base, int idx)
{
    int minus;
    int ans;
    int i;

    minus = 0;
    i = 0;
    while (is_in_base(str[i]) == -1)
    {
        if (str[i] == '-')
            minus++;
        i++;
        
    }

}
int atoi_base(char *str, char *base)
{
    int check;
    int ans;
    static int minus;

    minus = 0;
    if (term(str) == -1)
        return (0);
    check = term(str);
    if (!check_base(base))
        return (0);
    
    ans = cal(str, base, check, minus);
    return (ans);
}