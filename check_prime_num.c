#include <stdio.h>

int main() {
    int num,flag=0;
    printf("Enter first number: ");
    scanf("%d", &num);
    if(num==0 || num==1){
        flag=1;  //flag=1 mean it is not a prime
    }
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("\n\n%d is Prime Number\n\n", num);
    }
    else{
        printf("\n\n%d Is Not Prime Number\n\n", num);
    }

    return 0;
}


