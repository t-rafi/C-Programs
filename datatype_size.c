#include<stdio.h>
int main(){
    int intType;
    float floatType;
    double doubleType;
    char charType;
    printf("Integer takes %zu bytes\n", sizeof (intType));
    printf("Float takes %zu bytes\n", sizeof (floatType));
    printf("Double takes %zu bytes\n", sizeof(doubleType));
    printf("Char takes %zu bytes\n", sizeof(charType));
    return 0;
}

