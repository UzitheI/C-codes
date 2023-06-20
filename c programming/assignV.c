// checking if the number is a palindrome by using function
//  #include<stdio.h>
//   int reverse(int n){
//      int rem,rev=0;
//      while(n>0){
//          rem=n%10;
//          n=n/10;
//          rev=rev*10+rem;
//      }
//      return (rev);

// }
// int main(){
// int n;
// int r;
// printf("Enter the value of n:");
// scanf("%d",&n);
// r=reverse(n);

// if(r==n){
//     printf("It is a palindrome");
// }
// else{
//     printf("It is not a palindrome");
// }
// return 0;
// }

// wap in c to find whether the given number is prime or not using function
//  #include<stdio.h>
//  int prime(int n){
//      int flag=0,i;
//      for(i=1;i<=n;i++){
//          if(n%i==0){
//              flag=flag+1;
//          }
//      }
//      return flag;
//  }
//  int main(){
//      int n,r;
//      printf("Enter the value of n");
//      scanf("%d",&n);

//     r=prime(n);
//     if(r<=2){
//         printf("the number is a prime number");
//     }
//     else{
//         printf("the number isn't prime");
//     }
//     return 0;
// }

// wap in c to print all prime numbers less than 500 using function
// #include <stdio.h>
// int prime(int n)
// {
//     int flag = 0, i, j;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 2; j < i/2; j++)
//         {
//             if (i % j == 0)
//             {
//                 flag=1;
//                 break;
//             }
//             if (flag != 1)
//             {
//                 printf("%d\t", i);
//                 flag =0;
//             }
//         }
//     }
//     return 0;
// }
// int main()
// {
//     int n = 500;
//     int r;
//     prime(n);
//     return 0;
// }


//wap in c to convert decimal number to binary using functions
// #include<stdio.h>
// int decimal(int n){
//     int i,a[10];
//     for(i=0;n>0;i++){
//         a[i]=n%2;
//         n=n/2;
//     }
//     for(i=i-1;i>=0;i--){
//         printf("%d",a[i]);
//     }
//     return 0;
// }
// int main(){
//     int n,r;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     decimal(n);
//     return 0;
// }

//wap in c to find all the divisor of a given number using functions
// #include<stdio.h>
// int divisor(int n){
//     int a[100],i;
//     for(i=1;i<=n;i++){
//         if(n%i == 0){
//         a[i]=i;
//         }
//     }
//     for(i=1;i<=n;i++){
//         printf("%d\t",a[i]);
//     }
// }
// int main(){
//     int n,r ;
//     printf("enter the number");
//     scanf("%d",&n);
//     divisor(n);
//     return 0;
// }


//write a function power that computes x raised to the power y for integer x and y and return double type value
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x:");
    
    
}
