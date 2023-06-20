// #include<stdio.h>
//     void Indian(){
//         printf("Namaste");
//     }
//     void French(){
//         printf("\nBonjour");
//     }

// int main(){
//     char i,f; 
//     char c;
//     printf("Enter i for Indian and f for French:");
//     scanf("%c",&c);
//     if(c=='i')
//     {
        
//     Indian();
//     }
//     else
//     {
//         French();
//     }
   
    
//     return 0;
// }
// // main function le call lagayo aru void function haru la

//creating a function which will take 2 parameters and return the value of the sum  
// #include<stdio.h>
// int sum(int a,int b);
// int main(){
//     int a ,b;
//     printf("Enter the value of a");
//     scanf("\n%d",&a);
//     printf("Enter the value of b");
//     scanf("\n%d",&b);

//     int s=sum(a,b);
//     printf("sum is %d\n",s);
//     return 0;
// }
//    int sum(int a, int b){
//     return a+b;
//        }


// to print the sum of 2 numbers while using functions
#include<stdio.h>
    int sum (int a,int b);
int main(){
        int a,b;
        printf("Enter the value of a :");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        int s=sum(a,b);
        printf("%d",sum);
        return 0;
    
    
    }
    int sum(int a,int b){
        return a+b;
    }

