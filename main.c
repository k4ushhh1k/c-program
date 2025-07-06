/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float maths, science, history, computer, percentage;
    printf("Enter the marks of maths =");
    scanf("%f",&maths);
    printf("\n Enter the marks of science =");
    scanf("%f",&science);
    printf("\n Enter the marks of history =");
    scanf("%f",&history);
    printf("\n Enter the marks of computer =");
    scanf("%f",&computer);
    percentage = 100*(maths + science + history + computer/4*40);
    printf("\n The percentage of 4 subjects out of 40 marks is :%f",percentage);
    

    return 0;
}
