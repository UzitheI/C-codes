// the idea is to compare the i and j arrays 
#include<stdio.h>
int main(){
    int nums[5];
	int i,j,n,temp;
	printf("\nThe quantity of numbers is:\n");
	scanf("%d",&n);
	printf("\nThe numbers are:\n");
	for(i=0;i<n;i++){
		scanf("%d\t",&nums[i]);
	}
	for(i=0;i<n;++i){
		for(j=i+1;j<n-1;j++){
			if(nums[i]>nums[j]){
				temp=nums[i];
				nums[i]=nums[j];
				nums[j]=temp;
			}
			
		}
	}
	printf("\nThe numbers in ascending order are:\n");
	for(i=0;i<n;i++){
		printf("%d\t",nums[i]);
	}
	return 0;
}