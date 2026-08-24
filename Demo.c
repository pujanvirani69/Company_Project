#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter a,b,c ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a>b){
        if(b>c){
            printf("%d",b);
        }
        else{
            printf("%d",c);
        }
    }
    else if(b>a){
        if(a>c){
            printf("%d",a);
        }
        else{
            printf("%d",c);
        }
    }
    // else if(c>a){
    //     if(b>a){
    //         printf("%d",b);   
    //     }
    //     else{
    //         printf("%d",a);
    //     }
    // }
    else if (c > a) {
        if (b > c) {
            printf("%d", b);
        }
        else {
            printf("%d", a);
        }
    }
}