#include<stdio.h>
int main(){
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);
    for(i=1; i<11; i++){
        if(i==4){
            // break;
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}

