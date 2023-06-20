//check whether the number is odd or even
#include<stdio.h>
int main(){
    int n,i;
    printf("\nEnter the value of n:\n");
    scanf("%d",&n);
    if(n%2==0){
        printf("The number is even.");
    }
    else if (n%2!=0)
    {
        printf("The number is odd.");
    }
    else{
        printf("The number is 0 or negative.");
    }
    return 0;
}