#include <stdio.h>
int main() {
    int in;
    float flt;
    double dbl;
    char cha;

    printf("Enter Integer: ");
    scanf("%d", &in);
    printf("Enter Float: ");
    scanf("%f", &flt);
    printf("Enter Double: ");
    scanf("%lf", &dbl);
    printf("Enter Character: ");
    scanf(" %c", &cha);

    printf("\n\n OUTPUT \n\n");
    printf("Integer = %d\n", in);
    printf("Float = %f\n", flt);
    printf("Double = %lf\n", dbl);
    printf("Character = %c\n", cha);

    return 0;
}

