#include <unistd.h>

void putnb(int n)
{
    char c;
    
    if (n >= 10)
        putnb(n / 10);
    c =  n % 10 + '0';
    write(1, &c, 1);  
}

int atoi1(char *a)
{
    int i;
    int ans;

    i = 0;
    ans = 0;
    while (a[i])
    {
        ans = ans * 10 + a[i] - '0';
        i++;
    }
    return (ans);
}


int main(int ac, char **av)
{
    int i;

    i = 1;
    if (ac == 2)
    {
        while (i < 10)
        {
            putnb(i);
            write(1, " * ", 3);
            9 = ",7);
            putnb(i * atoi1(av[1]));
            if (i != 9)
                write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}