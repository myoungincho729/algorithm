#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    int *pi;
    int i, sum=0;
    pi = (int*)malloc(sizeof(int));
    if (pi==NULL){
        exit(1);
    }
    for (i=0;i<5;i++){
        scanf("%d",&pi[i]);
        sum += pi[i];
    }
    printf("%.1lf\n", sum/5.0);
    free(pi);
    return 0;
}