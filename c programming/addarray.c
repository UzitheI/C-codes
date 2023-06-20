#include<stdio.h>
int main(){
    int r,c,i,j;
    int a[10][10],b[10][10],sum[10][10];
    printf("Enter the values of rows:\n");
    scanf("%d",&r);
    printf("Enter the values of columns:\n");
    scanf("%d",&c);
    //to find the values of matrix a[i][j];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the value of a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe given a matrix is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[i][j]);
            if(a[i][j]==a[i][j]){
                printf("\t");
            }
            if(a[i][j]=c-1){
                printf("\n\n");
            }
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the value of b%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe given b matrix is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",b[i][j]);
            if(a[i][j]==a[i][j]){
                printf("\t");
            }
            if(a[i][j]=c-1){
                printf("\n\n");
            }
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    //printing the value of sum
    printf("\nThe sum of the matrix is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",sum[i][j]);
            if(a[i][j]==a[i][j]){
                printf("\t");
            }
            if(a[i][j]=c-1){
                printf("\n\n");
            }
        }
    }
    return 0;
    }            

