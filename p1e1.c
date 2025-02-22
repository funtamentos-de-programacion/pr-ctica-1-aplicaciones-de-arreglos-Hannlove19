#include <stdio.h>

int main () {
    double a[5]={1,2,3,4,5};

    for (int i=0; i<=4; i++) {
        printf ("%p \n", &a[i]);
    }

return 0;
}
