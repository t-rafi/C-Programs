#include <stdio.h>

int main() {
    int age[5];

    for(int i=0; i<5; i++){
        printf("Enter %d Number: ",i+1);
        scanf("%d",&age[i]);
    }
    for(int i=0; i<5; i++){
        printf("\n\n%d Number is: %d\n\n", i+1, age[i]);
    }



    return 0;
}

