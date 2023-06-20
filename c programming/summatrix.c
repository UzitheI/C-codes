#include<stdio.h>
    int i,j,k,m,n;
    int a[10] [10],b[10][10],mul[10][10];
int main(){
    printf("Enter the value of row");
    scanf("%d",&m);
    printf("Enter the value of column");
    scanf("%d",&n);
    printf("Enter the first matrix element:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix element:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("multiply of the matrix:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            mul[i][j];
        }
    for ( k=0 ; k < m; k++)
    {
        mul[i][j]+= a[i][k]*b[k][j];
    }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;


}