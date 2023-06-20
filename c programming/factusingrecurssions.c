// //trying to calculate the factorial using recursive functions
// #include<stdio.h>
// int func(int nums){
//     int res=0;
//     if (nums<=0){
//         printf("error");
//   }
//   else if(nums==1){
//     return nums;
//   }
//   else{
//     res=nums*func(nums-1);
//   }

// }
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     int save=func(n);
//     printf("The function of %d is %d",n,save);
//     return 0;
// }

#include<stdio.h>
int func(int num){
  int res;
  if(num<=0){
    printf("Error as it is less than 0 which makes the product of fact as 0 which is not possible");

  }
  else if(num==1){
    return num;
  }
  else{
    res=num*func(num-1);
  }
  return res;
}
int main(){
  int n,fact=0;
  printf("Enter the value of n:");
  scanf("%d",&n);
  fact=func(n);
  printf("The factorial of %d is %d",n,fact);
  return 0;
}
