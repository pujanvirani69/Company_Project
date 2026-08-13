<<<<<<< HEAD
#include<stdio.h>
void main(){
    int n;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("ENter A[%d] = ",i);
        scanf("%d",&a[i]);
    }
    int large=0,secondlarge=a[0],small=a[0],secondsmall=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>large){
            secondlarge=large;
            large=a[i];
        }
        if(a[i]<small){
            secondsmall=small;
            small=a[i];
        }
        if(a[i]<large && a[i]>secondlarge){
            secondlarge=a[i];
        }
        if(a[i]>small && a[i]<secondsmall){
            secondsmall=a[i];
        }
    }
    printf("Large = %d\n",large);
    printf("SecondLarge = %d\n",secondlarge);
    printf("secondSmall = %d\n",secondsmall);
    printf("small = %d\n",small);
=======
#include<stdio.h>
void main(){
    int n;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("ENter A[%d] = ",i);
        scanf("%d",&a[i]);
    }
    int large=0,secondlarge=a[0],small=a[0],secondsmall=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>large){
            secondlarge=large;
            large=a[i];
        }
        if(a[i]<small){
            secondsmall=small;
            small=a[i];
        }
        if(a[i]<large && a[i]>secondlarge){
            secondlarge=a[i];
        }
        if(a[i]>small && a[i]<secondsmall){
            secondsmall=a[i];
        }
    }
    printf("Large = %d\n",large);
    printf("SecondLarge = %d\n",secondlarge);
    printf("secondSmall = %d\n",secondsmall);
    printf("small = %d\n",small);
>>>>>>> 1b951bf12b85b449e4553f2b64774771808306bd
}