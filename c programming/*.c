//to print asteriks 
#include<stdio.h>
int main(){
    int n=4;
    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=n-1;j++){
            printf("*\n");
        }
    }
    return 0;
}