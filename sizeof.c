#include<stdio.h>
int main(){
    int intType;
    float floatType;
    double doubleType;
    char charcterType;
    printf("Int size: %zu bytes\n", sizeof(intType));
    printf("Float size: %zu bytes\n", sizeof(floatType));
    printf("Double size: %zu bytes\n", sizeof(doubleType));
    printf("Character size: %zu bytes\n", sizeof(charcterType));
    return 0;
}

