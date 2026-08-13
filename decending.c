<<<<<<< HEAD
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
    printf("\n before decending order\n");
    for(int i=0;i<n;i++){
        
        printf("a[%d] = %d \n ",i,a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int temp =a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\n After decending order\n");
    for(int i=0;i<n;i++){
        
        printf("a[%d] = %d\n",i,a[i]);
    }
    
=======
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
    printf("\n before decending order\n");
    for(int i=0;i<n;i++){
        
        printf("a[%d] = %d \n ",i,a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int temp =a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\n After decending order\n");
    for(int i=0;i<n;i++){
        
        printf("a[%d] = %d\n",i,a[i]);
    }
    
>>>>>>> 1b951bf12b85b449e4553f2b64774771808306bd
}