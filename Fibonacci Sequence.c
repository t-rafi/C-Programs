#include<stdio.h>
int main(){
int n1=0,n2=1,next,n;
printf("Enter Number: ");
scanf("%d",&n);
printf("%d %d ", n1,n2);
for(int i=3;i<=n;i++){
    next=n1+n2;
    printf("%d ", next);
    n1=n2;
    n2=next;
}
return 0;
}
