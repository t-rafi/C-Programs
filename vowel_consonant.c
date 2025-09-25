#include<stdio.h>
int main(){
    char c;
    printf("Enter character: ");
    scanf("%c", &c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
       c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("You entered vowel\n");
    }
    else{
        printf("You entered consonant");
    }
    return 0;
}

