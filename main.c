/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float r, pi, a;
    printf("Enter the radius r =\n");
    scanf("%f",&r);
    printf("Enter the value of pi =\n");
    scanf("%f",&pi);
    a = pi * r * r;
    printf("\nThe area of the cirle is : %f",a);

    return 0;
}
