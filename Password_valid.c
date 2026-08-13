#include<stdio.h>
#include<string.h>
void main(){
    char s[100];
    printf("Enter Password: ");
    scanf("%s",&s);
    if(strlen(s)<8){
        printf("Invalid Password: ");
        return ;
    }
    int u=0,l=0,d=0,special=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z'){
            u++;
        }
        else if(s[i]>='0' && s[i]<='9'){
            d++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            l++;
        }
        else{
            special++;
        }  
    }
    if(u==0 ||s==0 || l==0 ||d==0 ||special==0){
        printf("Invalid Password: ");
        return ;
    }
    printf("valid Password: ");
}