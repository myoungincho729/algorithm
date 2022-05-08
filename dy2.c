#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void){
    int n;
    scanf("%d", &n);
    getchar();
    int i;
    int min_len;
    int min_idx=0;
    char** d_array;
    d_array = malloc(n*sizeof(char*));
    for (i=0;i<n;i++){
        d_array[i] = malloc(100*sizeof(char));
    }

    for (i=0;i<n;i++){
        gets(d_array[i]);
    }
    min_len = 100;
    for (i=0;i<n;i++){
        if (strlen(d_array[i]) < min_len){
            min_len = strlen(d_array[i]);
            min_idx = i;
        }
    }
    printf("%s\n", d_array[min_idx]);
    return 0;
}