#include <stdio.h>
#define VER 7
#define BIT 16

int main(void){
    int max;
#if VER >=6
    printf("%d\n", VER);
#endif
#ifdef BIT ==16
    max = 32767;
#else
    max = 2147483647;
#endif
    printf("%d\n", max);

    return 0;
}