#include<stdio.h>
#include<string.h>
void main(){
    char s[100];
    printf("Enter String ");
    scanf("%s",s);
    printf("String Length: %d",strlen(s));
    int n=strlen(s);
    //single character
    // for(int i=0;i<n;i++){
    //     printf("\n%c,",s[i]);
    // }
    int temp=0;
    while(temp<=n){
        for(int i=0;i<temp;i++){
        printf("\n%c,",s[i]);
    }
    temp++;
    }
}