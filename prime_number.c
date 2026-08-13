#include<stdio.h>
int prime(int n);
int prime(int n){
    int count=0;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            count++;
        }
    }
    return count;

}
void main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    if(n==1){
        printf("Not Prime Number");
        return ;
    }
    int x=prime(n);
    if(x==0){
        printf("Prime Number");
    }
    else{
         printf("Not Prime Number");
    }
}