#include <stdio.h>
int main(void){
    char *pary[5];
    int i;
    pary[0] = "dog";
    pary[1] = "cat";
    pary[2] = "horse";
    pary[3] = "elephant";
    pary[4] = "tiger";
    for (i=0;i<5;i++){
        printf("%s\n",pary[i]);
    }
    return 0;
}