#include <stdio.h>

int main () {
    int a[3]={1,2,3};
    printf ("%p\n", a);
    printf ("%p \n", &a[0]);
    printf ("%p\n", &a);

return 0;
}
