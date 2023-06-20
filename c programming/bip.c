#include<stdio.h>
main(){
    int nums[100],n,i,j,temp;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            scanf("%d",nums[i]);
        }
    }
    printf("\nORIGINAL LIST\n");
    printf("----------------------");
    printf("%d",nums[i]);
    printf("\t\t");
    printf("i\tj\tnums[i]\tnums[j]\ttemp",i,j,nums[i],nums[j],temp);
    
}