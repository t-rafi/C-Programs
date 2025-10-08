#include <stdio.h>

int sum(int n);

int main() {
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);

    result = sum(number);

    printf("Sum is: %d\n", result);
    return 0;
}

// Recursive function to calculate sum of first n numbers
int sum(int n){
    if(n == 0)
        return 0;
    else
        return n + sum(n-1);
}
