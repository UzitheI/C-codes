//to find the sum and average of first n natural numbers
#include<stdio.h>
int main(){
    int n,i,sum=0;
    float av;
    //to get input of how many numbers from user;
    printf("Enter the value of n numbers:");
    scanf("%d",&n);
    //to add the numbers into a sum
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    av=sum/n;
    printf("The sum of n natural numbers is %d and \nthe average of n natural numbers is %f",sum,av);
    return 0;

}
//so in order to calculate the sum and average you must have to at first determine how many n natural numbers are present which this code gets from the users, as natural numbers have 1 as their first number you should initiate the loop from 1 and then you can initiate a sum that has value 0 and as the loop runs the values are added in the sum and then the average is calcuated by dividing the sum with n, which is easy 
