#include<stdio.h>
void main(){
int n;
printf("Enter Size Of array : ");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    printf("Enter a[%d] = ",i);
    scanf("%d",&a[i]);
}
int i=0,profit=0;
    for(i;i<n-1;i++){
        if(a[i]<a[i+1]){
        profit+=a[i+1]-a[i];
        }
    }
printf("Profit = %d",profit);
}