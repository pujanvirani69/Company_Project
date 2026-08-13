#include<stdio.h>
void main(){
    int n;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    int sl=a[0],l=a[0],s=a[0],ss=a[0],diff=0;
    for(int i=0;i<n;i++){
        if(l<a[i]){
            sl=l;
            l=a[i];
        }
        if(l>a[i] && sl<=a[i]){
            sl=a[i];
        }
        if(s>a[i]){
            ss=s;
            s=a[i];
        }
        if(s<a[i] && ss>a[i]){
            ss=a[i];
        }
    }
    diff=sl-ss;
    printf("Difference = %d",diff);
}