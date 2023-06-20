#include<stdio.h>
    struct employee{
        int age;
        char sex;
    }rijan;
int main(){
    printf("enter either m or f");
    scanf("%c",&rijan.sex);
    printf("%c",rijan.sex);
    return 0;

}