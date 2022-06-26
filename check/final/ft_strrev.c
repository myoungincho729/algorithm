#include <stdio.h>

int stlen(char *s)
{
    int i;

    i = 0;
    while (*s)
    {
        s++;
        i++;
    }
    return (i);
}
char *ft_strrev(char *str)
{
    int i;
    int len;
    char tmp;

    i = 0;
    len = stlen(str);
    while (i < len / 2)
    {
        tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
        i++;
    }
    return (str);
}
int main(void)
{
    char a[10] = "helloabc";
    printf("%s\n", ft_strrev(a));
    return (0);
}