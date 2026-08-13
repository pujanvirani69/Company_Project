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
    printf("\n before Acending order\n");
    for(int i=0;i<n;i++){
        
        printf("a[%d] = %d \n ",i,a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n After Acending order\n");
    for(int i=0;i<n;i++){
        
        printf("a[%d] = %d\n",i,a[i]);
    }
    
}