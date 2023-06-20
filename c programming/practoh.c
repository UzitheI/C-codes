#include<stdio.h>
void towers(int,char,char,char);
int main(){
    int n;
    printf("The number of disks is:\n");
    scanf("%d",&n);
    printf("The sequence of disks in the tower is:\n");
    //here we have to transfer the disks from a to b by using auxillary tower c
    towers(n,'A','C','B');
}
void towers(int n,char frompeg,char topeg,char auxpeg){
    if(n==1){
        printf("Move disk 1 from %c to %c\n ",frompeg,topeg);

    }
    towers(n-1,frompeg,auxpeg,topeg);
    printf("Move disk 1 from %c to %c \n",frompeg,auxpeg);
    towers(n-1,auxpeg,topeg,frompeg);

}