#include<stdio.h>
void main(){
    int n,sum=0,temp;
    printf("Enter Number: ");
    scanf("%d",&n);
    int m=n;
    while(sum!=4 && sum!=n){
        sum=0;
        while(m!=0){
            temp=m%10;
            m=m/10;
            sum=sum+(temp*temp);
        }
        if(sum==1){
            printf("Happy Number: ");
            return ;
        }
        m=sum;
    }
    printf("Not Happy Number ");
}