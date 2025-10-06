#include<stdio.h>
int main(){
int num, i,range, choice;
start:
printf("Enter Number: ");
scanf("%d",&num);
printf("Enter range: ");
scanf("%d", &range);
for(i=1; i<=range; i++){
    printf("%d * %d= %d\n", num,i, num*i);
}

printf("Wanna print another table?\n");
start2:
printf("1: Yes\n");
printf("2: No\n");

printf("Enter your choice: ");
scanf("%d", &choice);

if(choice==1){
    goto start;
}
else if(choice==2){
    printf("\nThank You! Program Ended\n");
}
else{
    printf("You enter an invalid choice\n");
    goto start2;
}

return 0;
}
