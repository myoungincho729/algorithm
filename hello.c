#include <unistd.h>
int main() {
    int i;
    char *c;
    char j;

    i = 0;
    c = "cscEJKKbcscb";

    while (c[i]) {
        if (c[i] >= 'a' && c[i] <= 'z') {
            j = c[i]-32;
            write(1,&j,1);
        }
        else {
            write(1, &c[i], 1);
        }
        i++;
    }
}
        

