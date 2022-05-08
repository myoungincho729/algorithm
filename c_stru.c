#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct hi{
    char *str;
    int length;
}WORD;

int main(void){
    char temp[101], *ptemp;
    int i,j,k,t;
    int temp_len=0, word_count=0, space=0;
    int start=0, end=0, p_idx=0;
    for (i=0;i<2;i++){
        gets(temp);
        temp_len = strlen(temp);
        for (j=0;j<temp_len;j++){
            if (temp[j]==' ') {
                space += 1;
            }
            word_count = space + 1;
            WORD* p = (WORD*)malloc(word_count*sizeof(WORD));  
            start = 0;
            ptemp = temp;
            p_idx = 0;
            for (j=0;j<temp_len;j++){
                if (temp[j]==' ' || temp[j]=='\0'){
                    end = j;
                    p[p_idx].str = (char*)malloc((end-start+1)*sizeof(char));
                    strncpy(p[p_idx].str, ptemp, end-start+1);
                    p[p_idx].str[end-start] = '\0';
                    ptemp = ptemp + end - start + 1;
                    p[p_idx].length = end-start;
                    p_idx++;
                    start = end + 1;
                }
            }
            for(k=0;k<p_idx;k++){
                printf("%s, %d\n", p[k].str, p[k].length);
            }
            for (t=0;t<p_idx;t++){
                free(p[t].str);
            }
            free(p);
        }
    }
    return 0;
}
