#include<stdio.h>
void main(){
    int n;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    int a[n],i=0,j=0;
    int start=0,end=n-1,key;
    for(i=0;i<n;i++){
        printf("Enter A[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("Which Element check here: ");
    scanf("%d",&key);
    printf("After Sorting Array: \n");
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("A[%d] = %d \n",i,a[i]);
    }
    while(start<=end){
        int medium=(start+end)/2;
        if(a[medium]==key){
            printf("It's found =%d",medium);
            return ;
        }
        else if(a[medium]<key){
         start=medium+1;
        }
        else if(a[medium]>key){
         end=medium-1;
        }
    }
    printf("element not Found: ");
}