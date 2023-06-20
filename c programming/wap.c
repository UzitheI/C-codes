// wap to read 10 numbers from the keyboard and display entered number in the screen
#include<stdio.h>
int main(){
    int n[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    printf("Enter the value of array");
    scanf("%d",&i);
    printf("The value of array[%d]is %d",i,n[i] );
    return 0;
}