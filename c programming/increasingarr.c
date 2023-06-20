//writing a problem to place array in increasing order
#include<stdio.h>
int main(){
    int nums[10],i,j,n,temp;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The numbers are:");
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        printf("The numbers in increasing order are:");
        for(i=0;i<n;i++){
            printf("%d\t",nums[i]);
        }
    }
printf("\n\n");
return 0;
}