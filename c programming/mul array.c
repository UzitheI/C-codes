// in order to multiply the values we first need to scan the values and seperate a valuefor multiplication 
#include<stdio.h>
int main(){
    int r,c,i,j,k,sum;
    int a[10][10],b[10][10],mul[10][10];
    printf("Enter the value of rows:");
    scanf("%d",&r);
    printf("Enter the value of column:");
    scanf("%d",&c);
    //to read the value of matrix 'a'
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the value of a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the value of b%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            
        }
    }
    
}