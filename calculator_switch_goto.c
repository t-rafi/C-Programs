
#include<stdio.h>
int main(){
    float num1,num2;
    char operation;
jump:
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("Enter 2 Numbers: ");
    scanf("%f %f", &num1,&num2);

    switch(operation){
        case '+': printf("%.1f + %.1f = %.1f", num1,num2, num1+num2); break;
        case '-': printf("%.1f - %.1f = %.1f", num1,num2, num1-num2); break;
        case '*': printf("%.1f * %.1f = %.1f", num1,num2, num1*num2); break;
        case '/':
            if(num2 != 0){
                printf("%.1f / %.1f = %.1f", num1,num2, num1/num2);
            } else {
                printf("Operation is error\n");
            }
            break;
        default:
            printf("Not a valid Operation.\nTry Again\n");
            goto jump;
    }
    return 0;
}
