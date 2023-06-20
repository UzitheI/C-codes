//functions perform a set of task after getting an input and gives a meaningful input 

/*take argument->do work-> return result

// block of code that performs a particular task*/

// it can be used multiple times and it increases code reusability 

// one function has a single work which helps to make the function more easy to use

// 3 choti vanda badhi euta kam garnu paryo vaney teslai function banaidey 

// Function Prototype or declaration which helps to tell compiler what function we are creating

// void printHello();
// this is an example of a function declaration
#include<stdio.h>
void printHello(){
    printf("Hello");
}
void printgoodbye(){
    printf("\nGoodbye!");
}
void umidesuka(){
    printf("\nVery tasty");
}
//we can declare this as it doesn't return
// this helps to determine what the function will do.....this also helps to jump from one function to anonther

int main(){
    printHello();
    //this is calling the function
    printgoodbye();
    umidesuka();
    
    return 0;
}
// now we have to call the function
// there are 2 types of functions which are 
// library functions such as scanf and printf 

// and there are user defined functions which are written by coders and defined by coders 

// library functions are also called in built functions and scanf and printf are functions provided by stdio.h

// passing arguments == value that function takes is called parameter and the value that the function gives is called return value 

// the value we give to our functions are called arguments

