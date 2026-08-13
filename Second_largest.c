<<<<<<< HEAD
#include<stdio.h>
void main(){
    int n;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter A[%d] = ",i);
        scanf("%d",&a[i]);
    }
    int large=0,secondlarge=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>large){
            secondlarge=large;
            large=a[i];
        }
        
        if(a[i]<large && a[i]>secondlarge){
            secondlarge=a[i];
        }
    }
    printf("SecondLargest = %d\n",secondlarge);
=======
#include<stdio.h>
void main(){
    int n;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter A[%d] = ",i);
        scanf("%d",&a[i]);
    }
    int large=0,secondlarge=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>large){
            secondlarge=large;
            large=a[i];
        }
        
        if(a[i]<large && a[i]>secondlarge){
            secondlarge=a[i];
        }
    }
    printf("SecondLargest = %d\n",secondlarge);
>>>>>>> 1b951bf12b85b449e4553f2b64774771808306bd
}