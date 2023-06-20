#include<stdio.h>
int main(){
    int r,c,i,j;
    int a[10][10],transpose[10][10];
    //enter the values of the matrix
    printf("Enter the values of rows:\n");
    scanf("%d",&r);
    printf("Enter the values of columns:\n");
    scanf("%d",&c);
    //now to find the matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the value of the matrix a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    //to print the value of matrix a 
    printf("\nEntered matrix is:\n");
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
    //transpose of matrix
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
           transpose[j][i]=a[i][j];
        }
    }
    //printing the value of the matrix
    printf("\nThe transpose of the matrix is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
           printf("%d",transpose[i][j]);
           if(i==i){
            printf("\t");
           }
           if(j==c-1){
            printf("\n\n");
           }
        }
    }
return 0;

    
}