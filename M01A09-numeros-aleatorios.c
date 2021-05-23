#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main(){
    srand(time(NULL));
    int n = rand() % 3;
    printf("%d\n", n);
    n = rand() % 3;
    printf("%d\n", n);
    n = rand() % 3;
    printf("%d\n", n);
    n = rand() % 3;
    printf("%d\n", n);
    n = rand() % 3;
    printf("%d\n", n);
    n = rand() % 3;
    printf("%d\n", n);
    n = rand() % 3;
    printf("%d\n", n);
}
