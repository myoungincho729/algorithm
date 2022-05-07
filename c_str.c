#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int str_chr(char *f, char c);
int main(void){
    char str[80];
    char al;
    
    gets(str);
    scanf("%c", &al);
    
    printf("%c, %d\n", al, str_chr(str,al));
    
    return 0;
}

int str_chr(char *f, char c){
    int i=0;
    while(*f){
        if(*f++ == c) i++;
    }
    
    return i;
}
