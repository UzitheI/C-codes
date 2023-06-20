#include<stdio.h>
    void swap(int,int);
    int a,b;
int main(void){
        int a=4,b=5;
        printf("Enter the values of a and b:");
        scanf("%d\t%d",&a,&b);
        //printing before a and b
        printf("The value of a before the swap is %d",a);
        printf("the value of b berfore the swap is %d\n",b);
        swap(&a,&b);
        //after the swap
        printf("The values of a and b after the swap is %d and %d", a,b);



    }
void swap(i,j){
    int temp;
    // swapping the values
 temp=i;
 i=j;
    j=temp;
    printf("The values of a and b after the swap is %d and %d", i,j);
    
    

   
}
