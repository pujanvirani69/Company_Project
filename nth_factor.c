#include<stdio.h>
void main(){
    int n;
    printf("Enter Number to find Nth Factor ");
    scanf("%d",&n);
    int k,count=0;
    printf("Enter Nth Factor: ");
    scanf("%d",&k);
    if(n-k<=0){
        printf("Please Enter Bound Factor: ");
        return ;
    }
   
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
            if(count==k){
                printf("Kth Factor = %d",i);
                return;
            }
        }
    }
    printf("Kth Factor Does Not Exist: ");

}