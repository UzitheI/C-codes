//write a program in c to store elements in an array and print them
#include<stdio.h>
int main(){
	int marks[3];
	printf("Enter physics:\n");
	scanf("%d",&marks[0]);
	printf("Enter chemistry:\n");
	scanf("%d",&marks[1]);
	printf("Enter maths:\n");
	scanf("%d",&marks[2]);
	printf("phy=%d\t chem=%d\t math=%d",marks[0],marks[1],marks[2]);
	return 0;
}