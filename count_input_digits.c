#include <stdio.h>

int main() {
    long long num;
    int count=0;
    printf("Enter first number: ");
    scanf("%lld", &num);
    do{
        num= num/10;
        ++count;
    }
    while(num!=0);
    printf("\n\n\nYou enter %d  digits\n\n\n", count);


    return 0;
}

