/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  	double vl, tx,pt;
	int tp;
	printf(" informe o valor da prestacao :");
	scanf("%lf", &vl);
	printf(" informe o valor da taxa: ");
	scanf("%lf",&tx);
	printf(" digite os dias em atraso: ");
	scanf(" %d",&tp);
	pt=vl+(vl*(tx/100)*tp);
	printf(" O valor a ser pago será de %lf ", pt);
	


    return 0;
}

