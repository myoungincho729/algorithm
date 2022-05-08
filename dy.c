#include <stdlib.h>
#include <stdio.h>
int main(void){
    int row, col;
    scanf("%d %d", &col, &row);
    char ** d_Array;
    char n = 'a'-1;
    int i,j;
    d_Array = malloc(sizeof(char*)*row);

    for (i=0;i<row;i++){
        d_Array[i] = malloc(sizeof(char)*col);
    }

    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            n++;
            d_Array[i][j] = n;
            printf("%c ", d_Array[i][j]);
            if (n=='z'){
                n = 'A'-1;
            }
            else if (n=='Z'){
                n = 'a'-1;
            }
        
            
        }
        printf("\n");
    }
    for (i=0;i<row;i++){
        free(d_Array[i]);
    }
    free(d_Array);
    return 0;

}