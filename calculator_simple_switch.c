
#include <stdio.h>
int main() {
    double n1, n2;
    char operation;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);

    switch(operation) {
        case '+': printf("%.1lf + %.1lf = %.1lf\n", n1, n2, n1 + n2); break;
        case '-': printf("%.1lf - %.1lf = %.1lf\n", n1, n2, n1 - n2); break;
        case '*': printf("%.1lf * %.1lf = %.1lf\n", n1, n2, n1 * n2); break;
        case '/':
            if (n2 != 0) printf("%.1lf / %.1lf = %.1lf\n", n1, n2, n1 / n2);
            else printf("Error! Division by zero is not allowed.\n");
            break;
        default: printf("Not a valid operator.\n");
    }
    return 0;
}
