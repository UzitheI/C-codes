#include<stdio.h>
#include<stdlib.h>
#define m 2
#define n 2
int main(){
    int (*a)[n]=malloc(sizeof(*a)*m);
    int (*b)[n]=malloc(sizeof(*b)*m);
    int (*sum)[n]=malloc(sizeof(*b)*m);
    int i,j;
    printf("ENTER THe first matrix");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER THe second matrix");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("the sum of the matrix is :");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            *(*sum+i)+j=*(*a+i)+j + *(*b)
        }
    }

    

}