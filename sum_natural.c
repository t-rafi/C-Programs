#include<stdio.h>
int main(){
    int i, sum=0, n;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("Total sum: %d", sum);
    return 0;
}

