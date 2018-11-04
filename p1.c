/* P1.c */
/* Luciano Soares Nascimento*/
/* 11811ECP024 */
#include <stdio.h>
void binario()
{
	int estado = 0, i;
	char bits[256];
	printf("digite um numero em binario : ");
	scanf("%s", bits);
	for(i=0; bits [i] != '\0';i++)
	{
		if(estado == 0 && bits[i] == '0'){
			estado = 0;
		}
		else if(estado == 0 && bits[i] == '1'){
			estado = 1;
		}
		else if(estado ==  1 && bits[i] == '0'){
			estado = 2;
		}
		else if(estado == 1 && bits [i] == '1'){
			estado = 0;
		}
		else if(estado == 2 && bits[i] == '0'){
			estado = 1;
		}
		else if(estado == 2 && bits[i] == '1'){
			estado = 2;
		}
	}
	if(estado == 0)
		printf(" \"%s\" e multiplo de 3 ", bits);
	else 
		printf(" \"%s\" nao e\n", bits);
}

int main()
{
	int estado = 0, i;
	char bits[256];
	printf("digite um numero em binario : ");
	scanf("%s", bits);
	for(i=0; bits [i] != '\0';i++)
	{
		if(estado == 0 && bits[i] == '0'){
			estado = 0;
		}
		else if(estado == 0 && bits[i] == '1'){
			estado = 1;
		}
		else if(estado ==  1 && bits[i] == '0'){
			estado = 2;
		}
		else if(estado == 1 && bits [i] == '1'){
			estado = 0;
		}
		else if(estado == 2 && bits[i] == '0'){
			estado = 1;
		}
		else if(estado == 2 && bits[i] == '1'){
			estado = 2;
		}
	}
	if(estado == 0)
		printf(" \"%s\" e multiplo de 3 ", bits);
	else 
		printf(" \"%s\" nao e\n", bits);
		
	return 0;
}
