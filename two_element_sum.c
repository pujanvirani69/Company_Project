<<<<<<< HEAD
#include<stdio.h>
void main(){
    int n,k,j;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter Target Value: ");
    scanf("%d",&k);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for( j=i+1;j<n;j++){
            sum =a[i]+a[j];
        }
        if(sum==k){
            printf("[%d,%d]",i,--j);
        }
    }
=======
#include<stdio.h>
void main(){
    int n,k,j;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter Target Value: ");
    scanf("%d",&k);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for( j=i+1;j<n;j++){
            sum =a[i]+a[j];
        }
        if(sum==k){
            printf("[%d,%d]",i,--j);
        }
    }
>>>>>>> 1b951bf12b85b449e4553f2b64774771808306bd
}