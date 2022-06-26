#include <stdlib.h>

char *putst(char *str, char *arr)
{
    int i;

    i = 0;
    while (str[i])
    {
        arr[i] = str[i];
        i++;
    }
    arr[i] = 0;
    return (arr)
}

int wc(char *str)
{
    int i;
    int wc;

    i = 0;
    wc = 0;
    while (str[i])
    {
        if (i == 0)
        {
            if (i == 0 && !(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
                wc++;
        }
        else if ((str[i-1] == ' ' || str[i-1] == '\n' || str[i-1] == '\t') && !(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
            wc++;
        i++;
    }
    return (wc);
}

int in_len(char *str, int idx)
{
    int len;

    len = 0;
    while (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
    {
        len++;
        idx++;
    }
    return (len);
}
char **ft_split(char *str)
{
    int w;
    int i;
    int j;
    char **ans;

    w = wc(str);
    **ans = (char **)malloc(sizeof(char *) * w);
    if (ans == 0)
        return (0);
    i = 0;
    j = 0;
    while (str[i])
    {
        if (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
            ans[j] = (char *)malloc(sizeof(char) * in_len(str, i));
            
    }


    
}