/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int skibidinacci(int a)
{
    if(a < 1) return 0;
    if(a == 1) return 1;
    return skibidinacci(a-1) + skibidinacci(a-5);
}

int main()
{
    // printf("Hello World");
    int a;
    printf("Input angka:\n");   
    scanf("%d", &a);
    printf("%d", skibidinacci(a));
    
    return 0;
}

