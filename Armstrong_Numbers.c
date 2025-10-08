//An Armstrong number is a number that equals the sum of its digits raised to the power of the number of digits.

#include <stdio.h>

int main() {
    int num, original,reminder,result=0;
    printf("Enter three-digit number: ");
    scanf("%d", &num);
    original=num;

        while(original != 0){
            reminder=original % 10; //reminder contains the last digit
            result +=reminder * reminder * reminder;     // adding cube of digit to result
            original/=10;   //removing last digit from the original number
            }
         if(result==num){
                    printf("%d is an Armstrong Number", num);
                }
                else{
                    printf("%d is not Armstrong Number", num);
                }


    return 0;
}

