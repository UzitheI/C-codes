#include<stdio.h>
int main(){
    int nums[5];
    int i,j,n,temp;
    printf("How many numbers are there?");
    scanf("%d",&n);
    printf("\nWhat are the numbers?\n");
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    for(i=0;i<n-1;++i){
        //i got confused here regarding why i used n-1, thought for some time and its because i am working on arrays, an array starts from 0 and i is initiazlized to be 0. that makes it that the third element has i=n-1=3-1=2
        for(j=i+1;j<n;j++){
            //here j is used for the smaller number to be used in n[i]>n[j], so j=i+1 makes sense because we are about to compare an element bigger than i here and if i is greater than j then the ascending program starts
            if(nums[i]>nums[j]){ 
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;

            
        }
        }
    }
        printf("The numbers in ascending order are :\n");
        for(i=0;i<n;i++){
            //here i thought for some time because i was confused about using and initializing i but it is because the program executed above has already arranged the numbers in ascending order and we can basically call the index number for the values to be printed in ascending order
            printf("\t%d",nums[i]);
        }
        return 0;

    }
