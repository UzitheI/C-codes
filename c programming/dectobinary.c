#include<stdio.h>
int binary(int n){
    int a[10],i;
    for(i=0;n>0;i++){
        a[i]=n%2;
        n=n/2;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
}
int main(){
    int n,r;
    printf("Enter the value of n:");
    scanf("%d",&n);
    binary(n);
    return 0;
}