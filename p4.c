//Luciano Soares Nascimento
//11811ECP024

#include<stdio.h>

int a(int m, int n)
{
	if(m == 0)
		return n+1;
	else if(m>0 && n == 0)
		return a(m-1,1);
	else if(m>0 && n>0)
		return a(m-1,a(m,n-1));
}

int main()
{
	int m,n;
	printf("digite um numero: ");
	scanf("%i", &m);
	printf("Digite outro numero: ");
	scanf("%i", &n);
	printf("%i", a(m,n));
	return 0;
}

