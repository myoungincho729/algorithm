#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void){
    int s=0;
    int i=1;
    while (i<=10){
        if ((i%3==0) || (i%5==0)){
            s += i;

        }
        i++;
    }
    printf("3 또는 5의 배수의 합은 %d",s);
    return 0;
} 
