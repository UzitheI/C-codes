// here we will learn about pointers from notes
/*pointer is basically defined by an '*' and this asterik makes a data type pointer data type which when combined with & can help find the address of the function
a pointer can be used to print the address of the data type and also the value present in the allocated memory can be calculated by using * in the ouput area

here %u can be used to print the memory address and %d can be used to print the value of the pointer

*/
// an example
//  #include<stdio.h>
//  int main()
//  {
//      int v=10,*p;
//      p=&v;

// }

// #include<stdio.h>
// int main(void){
//     int p[2][3]={{1,2,3},{4,5,6}};
//     // printf("p=%p p+1=%p",p,p+1);
//     // printf("*p=%p,*p+1=%p",*p,*p+1);
//     printf("(*(p+0)+1)=%p,*(p+1)+1=%d",(*p+0)+1,*(*(p+1)+1));

//     return 0;
// }

#include <stdio.h>
int main()
{
    int a[200][200];
    int b[200][200];
    int i, j, m, n;
    printf("enter the value of M;");
    scanf("%d", &m);
    printf("enter the value of n;");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",a[i][j]);
        }
    }

}
