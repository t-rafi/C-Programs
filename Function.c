#include <stdio.h>

int addNumbers(int a, int b);  // 🔸 Function prototype

int main() {
    int n1, n2, sum;
    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    sum = addNumbers(n1, n2);  // 🔸 Function call
    printf("Sum is : %d", sum);

    return 0;
}

//  Function definition
int addNumbers(int a, int b) {
    int result;
    result = a + b;
    return result;
}
