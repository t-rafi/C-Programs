#include <stdio.h>
int addNumbers (int a,int b);
int main() {
    int n1, n2, sum;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    sum= addNumbers(n1,n2);
    printf("Sum is : %d", sum);
    return 0;
}
    int addNumbers (int a,int b){
    int result;
    result= a+b;
    return result;
    }

