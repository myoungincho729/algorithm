#include <stdio.h>
int *sum(int a, int b);
int main(void){
    int a=10, b = 20;
    int *resp;
    resp = sum(10,20);
    printf("%d\n", *resp);
    
    return 0;

}
int *sum(int a, int b){
    static int res;
    res = a + b;
    return &res;
}