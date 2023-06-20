//calculate the sum of first 10 odd numbers
#include<stdio.h>
int main(){
    int n,i,sum=0,count=0;
    printf("Enter the numbers:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        count=count+1;
        if(i%2!=0|| count<11){
            sum=sum+i;
            }
            if(count=11){
                break;
        }

    }
    printf("The sum of first 10 odd numbers is: %d\n",sum);
    return 0;

}