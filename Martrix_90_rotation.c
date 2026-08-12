#include<stdio.h>
void main(){
    int m,n,i=0,j=0;
    printf("Enter Row & col : ");
    scanf("%d %d",&m,&n);
    int a[m][n],b[n][m],x=-1,y=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter a[%d][%d] = ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
                printf("\n");

    }
    for(j=0;j<n;j++){
        x++;
        y=0;
        for(i=m-1;i>=0;i--){
            b[x][y]=a[i][j];
            y++;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}