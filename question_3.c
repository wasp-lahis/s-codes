/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    for(int i = 1; i <= 100; i++){
        // printf("%d ",i);
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            printf("FooBaa\n");
        }
        else if(i % 3 == 0)
        {
            printf("Foo\n");
        }
        else if(i % 5 == 0)
        {
            printf("Baa\n");
        }
        else{
            printf("%d\n",i);
        }
        
    }
}



