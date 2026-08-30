#include<stdio.h>
#include<string.h>
char* reverse_String(char s[100]){
    if (!s) return NULL;
    int left=0;
    int right=strlen(s)-1;
    while(left<=right){
        char temp=s[left];
        s[left]=s[right];
        s[right]=temp;

        left++;
        right--;
    }
    return s;
}

void main(){
    char s[100];
    printf("Enter String : ");
    scanf("%s",s);
    reverse_String(s);
    printf("After Reverse String : ");
    printf("%s",s);
}