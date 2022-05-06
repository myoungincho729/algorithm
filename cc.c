#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void){
    char A[20];
    char B[20];
    char *pa, *pb;
    int len1 = 0, len2 = 0;
    int max_len = 0;

    scanf("%s",A);
    scanf("%s",B);
    len1 = strlen(A);
    len2 = strlen(B);

    if (len1 < len2){
        max_len = len2;
    }
    else {
        max_len = len1;
    }

    pa = A;
    pb = B;

    int i;
    for (i=0;i<max_len;i++){
        if (pa[i] == pb[i]){
            printf("O");
        }
        else {
            printf("X");
        }
    }
    printf("\n");
    return 0;
} 
