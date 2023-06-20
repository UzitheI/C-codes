//to add the sum of odd numbers 
#include<stdio.h>
int main(){
    int n,i,sum=0;
    //to know the number of number
    printf("Enter the value of n:");
    scanf("%d",&n);
    //to identfiy the odd numbers
    for(i=0;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;    
            }
    }
    printf("%d\n",sum);

    return 0;
}