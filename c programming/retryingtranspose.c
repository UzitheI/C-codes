#include<stdio.h>
int main(){
    int r,c,i,j;
    int a[10][10],transpose[10][10];
    printf("Enter the value of rows:");
    scanf("%d",&r);
    printf("Enter the value of columns:");
    scanf("%d",&c);
    //knowing the values of matrix a
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the values of a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    //printing the values of the matrix a
    printf("\nThe entered matrix is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[i][j]);
        if(i==i){
            printf("\t");
        }
        if(j==c-1){
            printf("\n\n");
        }
        }
    }
    //to find the transpose of the matrix 
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            transpose[j][i]=a[i][j];
        }
    }
    //printing the transpose of the matrix
    printf("\nThe transpose of the given matrix is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",transpose[i][j]);
            if(i==i){
                printf("\t\t");
                 
            }
            if(j==c-1){
                printf("\n\n");
            }
        }
    }
    return 0;





}