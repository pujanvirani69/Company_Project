<<<<<<< HEAD
#include<stdio.h>
void main(){
 char s[100];
 printf("Enter String : ");
gets(s);
 printf("%s\n",s);

int cn=0,v=0;
for(int i=0;s[i]!='\0';i++){
    char c=s[i];
    if(c == 'a' ||c=='e'||c=='i'||c=='o'||c=='u'||c == 'A' ||c=='E'||c=='I'||c=='O'||c=='U'){
        v++;
    }
    else{
        if((c>='a' && c<='z' )|| (c>='A'&&c<='Z')){
            cn++;
        }
    }
}
printf("Consonant = %d\n",cn);
printf("Vowel = %d",v);
=======
#include<stdio.h>
void main(){
 char s[100];
 printf("Enter String : ");
gets(s);
 printf("%s\n",s);

int cn=0,v=0;
for(int i=0;s[i]!='\0';i++){
    char c=s[i];
    if(c == 'a' ||c=='e'||c=='i'||c=='o'||c=='u'||c == 'A' ||c=='E'||c=='I'||c=='O'||c=='U'){
        v++;
    }
    else{
        if((c>='a' && c<='z' )|| (c>='A'&&c<='Z')){
            cn++;
        }
    }
}
printf("Consonant = %d\n",cn);
printf("Vowel = %d",v);
>>>>>>> 1b951bf12b85b449e4553f2b64774771808306bd
}