#include<stdio.h>
int main(){
    int n, i, sum=0;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for(i=100; i>=n; i--){
        sum = sum + i;
        printf("%d\n", i);
    }
    printf("Sum is: %d", sum);
    return 0;
}

