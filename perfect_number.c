<<<<<<< HEAD
#include<stdio.h>
int perfect_numbers(int x);
void main(){
    int n;
    printf("Enter Number  = ");
    scanf("%d",&n);
    int x=perfect_numbers(n);
    if(n==x){
        printf("Perfect Number : ");
    }
    else{
        printf("Not Perfect Number ");
    }
}
int perfect_numbers(int x){
    int sum=0;

    for(int i=1;i<x;i++){
        if(x%i==0){
            sum +=i;
        }
    }
    return sum;
=======
#include<stdio.h>
int perfect_numbers(int x);
void main(){
    int n;
    printf("Enter Number  = ");
    scanf("%d",&n);
    int x=perfect_numbers(n);
    if(n==x){
        printf("Perfect Number : ");
    }
    else{
        printf("Not Perfect Number ");
    }
}
int perfect_numbers(int x){
    int sum=0;

    for(int i=1;i<x;i++){
        if(x%i==0){
            sum +=i;
        }
    }
    return sum;
>>>>>>> 1b951bf12b85b449e4553f2b64774771808306bd
}