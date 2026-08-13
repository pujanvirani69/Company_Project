<<<<<<< HEAD
//not complete 
#include<stdio.h>
void main(){
    int n;
    printf("Enter Size of Row or Col : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                printf(" %d ",i);
            }
            else{
                // printf("   ");
            }
            if(i>=2 && i<n){
                
            }
            
        }
        printf("\n");
    }
=======
//not complete 
#include<stdio.h>
void main(){
    int n;
    printf("Enter Size of Row or Col : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                printf(" %d ",i);
            }
            else{
                // printf("   ");
            }
            if(i>=2 && i<n){
                
            }
            
        }
        printf("\n");
    }
>>>>>>> 1b951bf12b85b449e4553f2b64774771808306bd
}