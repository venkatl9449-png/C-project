#include <stdio.h>
void biggest3() {
    int a = n1, b = n2, c = n3;
    int biggest = (a > b ? (a > c ? a : c) : (b > c ? b : c));
    printf("Biggest number is %d\n", biggest);
}

