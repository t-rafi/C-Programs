#include <stdio.h>

int main() {
    int reverse=0, reminder , n;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n!=0){
        reminder= n % 10;
        reverse= reverse * 10 + reminder;
        n/=10;
    }
    printf("Reverse number: %d", reverse);


    return 0;
}


