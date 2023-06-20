//call by reference
#include<stdio.h>
void swap(int*x,int*y);
int main(){
    int a=200,b=100;
    //before printing
    printf("Before swap the value of a is %d and b is %d\n",a,b);
    swap(&a,&b);
    printf("After swap the value of a is %d and b is %d",a,b);
    return 0;
}
void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}