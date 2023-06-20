#include<stdio.h>
int main(){
    int i=0,fact=1,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        fact=fact*(n-i);
    }
    printf("The fact of %d number is:%d",n,fact);
    return 0;

}faa