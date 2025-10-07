#include <stdio.h>

int main() {
    int num,reverse=0, reminder,original;
    printf("Enter first number: ");
    scanf("%d", &num);
    original=num;
    while(num!=0){
        reminder= num%10;
        reverse= reverse * 10 + reminder;
        num= num/10;
    }
    if(original==reverse){
        printf("\n\n%d is Palindrome\n\n", original);
    }
    else{
        printf("Not Palindrome\n Reversed Number: %d", reverse);
    }



    return 0;
}

