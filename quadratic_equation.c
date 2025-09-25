


#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c, dis,root1,root2, realpart,impart;
    char choice;
    jump:
printf("Enter A: ");
scanf("%f", &a);
printf("Enter B: ");
scanf("%f", &b);
printf("Enter C: ");
scanf("%f", &c);

dis= b*b-4*a*c;
if(dis>0){
    root1= (-b+sqrt(dis))/(2*a);
                                                    //root1= (-b+-sqrt(dis))/(2*a);
    root2= (-b-sqrt(dis))/(2*a);

    printf("\n\nPositive\n\n Print 2 real Numbers: %.2f and %.2f\n\n", root1, root2);
}

else if(dis==0){
    root1=root2=-b/(2*a);
    printf("\n\nZero\n\n Print 1 real Number & both are roots same: %.2f .%2f\n\n", root1, root2);

}

else{
    realpart= -b/(2*a);
    impart= (sqrt(-dis))/(2*a);
    printf("\n\n Negative \n\n Root 1= %.2f+%.2fi\n Root 2= %.2f-%.2fi\n\n", realpart,impart,realpart,impart);
}
printf("Do you want to solve another equation? (y/n): ");
        scanf(" %c", &choice);
if (choice=='y'||choice=='y'){
    goto jump;
}
printf("\nGoodbye!\n");
return 0;
}
