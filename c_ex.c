#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct address
{
    char name[20];
    int age;
    char address[80];
};

int main(void) {
    struct address list[5] = {
        {"aa", 20, "seoul"},
        {"bb", 22, "busan"},
    };

    int i;

    for(i=0;i<2;i++){
        printf("%s, %d, %s\n", list[i].name, list[i].age, list[i].address);
    }
}
