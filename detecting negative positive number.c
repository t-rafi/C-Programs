#include<stdio.h>
int main(){
int num;
printf("Enter Number: ");
scanf("%d", &num);
     if (num > 0) {
        printf("%d is positive\n", num);
    }
    else{
        if(num<0){
            printf("%d is negative\n", num);
        }
        else{
            printf("Number is Zero");
        }
    }

return 0;
}
