/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    	double n1,n2,n3,n4,md;
	printf(" digite a primeira nota: ");
	scanf("%lf",&n1);
		printf(" digite a segunda nota: ");
	scanf("%lf",&n2);
		printf(" digite a terceira nota: ");
	scanf("%lf",&n3);
		printf(" digite a quarta nota: ");
	scanf("%lf",&n4);
	
	md=(n1+n2+n3+n4)/4;
	
	printf(" a media do aluno e de %f pontos ", md);

    return 0;
}
