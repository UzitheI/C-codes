#include<stdio.h>
int main(){
    int r,c,i,j;
    int a[10][10],b[10][10],sum[10][10];
    //to find the rows
    printf("Enter the number of rows:");
    scanf("%d",&r);
    //to find the number of columns
    printf("Enter the number of columns:");
    scanf("%d",&c);
    //to find the value of the first matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the value of a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    //to find the value of the second matrix 
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the value of b%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    //to find the sum
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n\n-----------------------------\n\n");
    //to print the values of the sum
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",sum[i][j]);
        }
    }
    printf("\n\n");
    return 0;
    

}