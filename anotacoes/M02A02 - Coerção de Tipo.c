#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int a = 9;
    int b = 7;
    float c = 17;
    float d = 49;
    int e = a / b;
    int f = a / c;
    int g = c / d;
    int h = c / a;
    float i = a / b;
    float j = a / c;
    float k = c / d;
    float l = c / a;

    printf("int a = %d\n", a);
    printf("int b = %d\n", b);
    printf("float c = %f\n", c);
    printf("float d = %f\n", d);
    printf("int e = a / b = %d\n", e);
    printf("int f = a / c = %d\n", f);
    printf("int g = c / d = %d\n", g);
    printf("int h = c / a = %d\n", h);
    printf("float i = a / b = %f\n", i);
    printf("float j = a / c = %f\n", j);
    printf("float k = c / d = %f\n", k);
    printf("float l = c / a = %f\n", l);
}
