#include <stdio.h>
long int fact(int n);
int main() {
    int n1;
    long int result;
    printf("Enter first number: ");
    scanf("%d", &n1);
    result=fact(n1);
    if(n1<01){
        printf("Factorial not defined for negative numbers.\n");
    }
    else{
        printf("Result: %ld", result);
    }
    return 0;
}
long int fact(int n){
if(n>=1){
    return n*fact(n-1);
}
else{
    return 1;
}
}

