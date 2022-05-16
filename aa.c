#include <stdio.h>
void input_arr(int *pa, int size);
int find_max(int *pa, int size);

int main(void){
    int arr[5];
    int max;
    int size = sizeof(arr)/sizeof(arr[0]);

    input_arr(arr,size);
    max = find_max(arr, size);
    printf("max : %d\n",  max);

    return 0;
}

void input_arr(int *pa, int size){
    int i;

    for (i=0;i<size;i++){
        scanf("%d", pa+i);
    }
}
int find_max(int *pa, int size){
    int i;
    int max_value = *(pa);
    for (i=0;i<size;i++){
        if (*(pa+i)>max_value){
            max_value = *(pa+i);
        }
    }
    return max_value;
}
