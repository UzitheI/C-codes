#include <stdio.h> 
void swap(int *x, int *y); 		/* function declaration */ 

int main () { 
        int a; int b;  		/* local variable definition */
        printf("Enter the value of a and b:");
        scanf("%d\t%d",&a,&b) ;
        printf("Before swap, value of a : %d\n", a ); 
        printf("Before swap, value of b : %d\n", b ); 
        /* calling a function to swap the values.  
        &a indicates pointer to a ie. address of variable a and 
        &b indicates pointer to b ie. address of variable b. */ 
        swap(&a, &b); 
        printf("After swap, value of a : %d\n", a ); 
        printf("After swap, value of b : %d\n", b ); 
        return 0; 
}
void swap(int *x, int *y) { 		/* function definition to swap the values */ 
    int temp; 
	temp = *x;  		/* save the value of address x */ 
	*x = *y; 				/* put y into x */ 
	*y = temp; /* put temp into y */ 
	// return; 
  }