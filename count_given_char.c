#include<stdio.h>
void main(){
    char s[100],c;
    int count=0;
    printf("Enter String: \n");
    gets(s);
    printf("Enter Character find :  ");
    scanf("%c",&c);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==c){
            count++;
        }
    }
    printf("Count = %d ",count);
}