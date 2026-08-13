<<<<<<< HEAD
#include<stdio.h>
void main(){
    int n;
    printf("Enter Row Of stars : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
=======
#include<stdio.h>
void main(){
    int n;
    printf("Enter Row Of stars : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
>>>>>>> 1b951bf12b85b449e4553f2b64774771808306bd
}