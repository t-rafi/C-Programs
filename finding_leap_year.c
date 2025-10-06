<<<<<<< HEAD
#include<stdio.h>
int main(){
int year;
jump:
printf("Enter year: ");
scanf("%d",&year);
if (year % 400==0){
    printf("Year is leap year\n\n");
}
else if(year%100==0){
    printf("Not a leap Year \n\n");
}
else if(year % 4 == 0){
    printf("Year is leap year \n\n");
}
else{
    printf("Not a leap year\n\n");
}
printf("Hello")
goto jump;
return 0;
}
=======
#include<stdio.h>
int main(){
int year;
jump:
printf("Enter year: ");
scanf("%d",&year);
if (year % 400==0){
    printf("Year is leaf year\n\n");
}
else if(year%100==0){
    printf("Not a leap Year \n\n");
}
else if(year % 4 == 0){
    printf("Year is leap year \n\n");
}
else{
    printf("Not a leap year\n\n");
}
goto jump;
return 0;
}
>>>>>>> f152d6c2fa962b22c474923141334b11fe3c5a20
