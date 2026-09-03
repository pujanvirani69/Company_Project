#include<stdio.h>
void main(){
    char s[100];
    int count=0,i=0;
    printf("Enter Line to count How Many Word in Line : ");
    gets(s);
    // printf("%s",s);
    while(s[i]!='\0'){
        if(s[i]==' '){
            count++;
        }
        i++;
    }
    count++;
    printf("Total Word = %d",count);
}