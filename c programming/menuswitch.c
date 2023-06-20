#include<stdio.h>
int main(){
    int choice;
    printf("Enter the number you want to choose:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("you chose number1 ");
        break;
        
        case 2:
        printf("You chose number 2 ");
        break;
        
        default:
        printf("You did not choose any number");
        break;
    }
    return 0;
}