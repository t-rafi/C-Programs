#include<stdio.h>
int main(){
char C;
printf("Enter Character: ");
scanf("%c", &C);
if(C>='a'&&C<='z'){
    printf("%c is an Alphabet",C);
}
else if(C>='A'&&C<='Z'){
    printf("%c is an Alphabet",C);
}
else{
    printf("Not Alphabet");
}

return 0;
}
