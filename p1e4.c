#include <stdio.h>

int main () {

    int a[2][3]= {{1,2,3}, {4,5,6}};
    printf ("%p\n %p\n %p\n",a, a[0], &a[0][0]);

return 0;
}
