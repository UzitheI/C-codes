//3.04.2023
/*starting my very first c class
starting by learning variables and their usage and their rules*/
#include<stdio.h>
int main(){
    int number=24;
    char star= 'd';
    int age=22;
    float pi=3.14;
    int final_price=3400;
    //this underscore is used to give space
    // their are a few rules that must be followed when giving variable to C
    /*variable names are case sensitive which means that small "a" and big "A"have different values respectively
    you cannot start a variable name with a number
    variable name wont store a space but rather it will store an underscore which can be used to give a space between variablenames
    variable name should have meaning for ease
    boolean and string doesn't exisit in c, it lacks objects and classes*/
    printf("%d",&final_price);
    return 0;

}
