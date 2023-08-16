/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    	double c,f;
	printf(" informe a temperatura em celsius: ");
	scanf(" %lf",&c);
	f=(9*c+160)/5;
	printf(" %f C equivale a %f F");

    return 0;
}