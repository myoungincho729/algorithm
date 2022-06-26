#include <unistd.h>

int main(void)
{
    char c[100] = "abcABC";
    
    int i = 0;
    while (c[i]){
        write(1,&c[i],1);
        i++;
    }
    
    return 0;
}

