#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter Row of Butterfly: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        for(int j=0;j<=2*(n-i);j++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");

    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        for(int j=0;j<=2*(n-i);j++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");

    }
}