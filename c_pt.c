#include <stdio.h>

int main(void){
    int a = 10;
    int *pi;
    int **ppi;

    pi = &a;
    ppi = &pi;

    printf("%d, %p\n", a, &a);
    printf("%p, %p, %d\n", pi, &pi, *pi);
    printf("%p, %p, %p, %d\n", ppi, &ppi, *ppi, **ppi);
    return 0;

}