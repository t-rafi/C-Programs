#include<stdio.h>
int checkPrimeNumber(int n);
int main(){
int n, flag;
printf("Enter Number: ");
scanf("%d", &n);
flag=checkPrimeNumber(n);
if(flag==1){
    printf("%d Is Not Prime Number", n);
}
else{
    printf("%d Is Prime Number", n);
}
return 0;
}

int checkPrimeNumber(int n){
if (n==1 || n==0)
    return 1;

for(int i=2; i<=n/2; i++){
     if(n%i==0){
      return 1;
     }
}
return 0;
}

