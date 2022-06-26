#include <stdlib.h>

int main(int ac, char **argv)
{
    
}
int strlen(char *str)
{
    int l;
    int i;

    i = 0;
    l = 0;
    while (str[i++])
        l++;
    return (l);
}
int input_check(char *str)
{
    int i;
    int l;
    int sp;

    i = 0;
    l = 0;
    sp = 0;
    while (str[i])
    {
        if ('1' <= str[i] && str[i] <= '4')
            l++;
        else if (str[i] ==' ')
            sp++;
        i++;
    }
    if (l == 16 && sp == 15)
        return (1);
    else
        return (0);
}

int *constraint(char *str)
{
    int i;
    int *cnstr;

    cnstr = (int *)malloc(sizeof(int) * 16);
    i = 0;
    while (str[i])
    {
        if (str[i] != ' ')
            cnstr[i / 2] = atoi(str[i]);
        i++;
    }
    return (cnstr);
}

int **arr(int l)
{
    int **ar;
    int i;

    i = 0;
    ar = (int *)malloc(sizeof(int)*(l + 2));
    while (i < l + 2)
    {
        ar[i] = (int *)malloc(sizeof(int)*(l + 2));
        i++;
    }
    return (ar);
}

void alloc_cnstr(int **ar, int *cnstr, int len)
{
    int i;
    int cnt;

    cnt = 1;
    i = 0;
    while (i < 16)
    {
        if (i % len == 0)
            cnt = 1;
        if (0 <= i && i < len)
            ar[0][cnt] = cnstr[i];
        else if (len <= i && i < len * 2)
            ar[len + 1][cnt] = cnstr[i];
        else if (len * 2 <= i && i < len * 3)
            ar[cnt][0] = cnstr[i];
        else
            ar[cnt][len + 1] = cnstr[i];
        cnt++;
    }
}

int check(int **arr, int x, int y, int k)
{
    int i;
    
    i = 1;
    while (i < y)
    {
        if (arr[x][i] == k)
            return (0);
        i++;
    }
    i = 1;
    while (i < x)
    {
        if (arr[i][y] == k)
            return (0);
        i++;
    }
    return (1);
}

int check_right(int **arr, int x, int y, int k, int len)
{
    int i;
    int cnt;
    int tmp;

    i = 1;
    cnt = 0;
    tmp = 0;
    arr[x][y] = k;
    while (i < len + 1)
    {
        if (arr[x][i] > tmp)
        {
            cnt++;
            tmp = arr[x][i];
        }
        i++;
    }
    if (cnt > arr[x][0])
        return (0);
    return (1);
}

int check_left(int **arr, int x, int y, int k, int len)
{
    int i;
    int cnt;
    int tmp;

    i = 1;
    cnt = 0;
    tmp = 0;
    arr[x][y] = k;
    while (i < len + 1)
    {
        if (arr[x][i] > tmp)
        {
            cnt++;
            tmp = arr[x][i];
        }
        i++;
    }
    if (cnt > arr[x][0])
        return (0);
    return (1);
}

int check_right(int **arr, int x, int y, int k, int len)
{
    int i;
    int cnt;
    int tmp;

    i = 1;
    cnt = 0;
    tmp = 0;
    arr[x][y] = k;
    while (i < len + 1)
    {
        if (arr[x][i] > tmp)
        {
            cnt++;
            tmp = arr[x][i];
        }
        i++;
    }
    if (cnt > arr[x][0])
        return (0);
    return (1);
}

int check_right(int **arr, int x, int y, int k, int len)
{
    int i;
    int cnt;
    int tmp;

    i = 1;
    cnt = 0;
    tmp = 0;
    arr[x][y] = k;
    while (i < len + 1)
    {
        if (arr[x][i] > tmp)
        {
            cnt++;
            tmp = arr[x][i];
        }
        i++;
    }
    if (cnt > arr[x][0])
        return (0);
    return (1);
}