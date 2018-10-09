/*
P3.c
Luciano Soares Nascimento
11811ECP024
*/
#include <stdio.h>
int returnnum(char numero[])
{
	int i=0,j = 1, num = 0;
	for(i = 0;numero[i] != '\0';i++);
	while(i >= 0)
	{
		if(j == 1)
		{
			if(numero[i] == '1')
				{
					num = num + 1;
					j = j * 10;
				}
			else if(numero[i] == '2')
				{
					j = j * 10;
					num = num + 2;
				}
			else if(numero[i] == '3')
				{
					j = j * 10;
					num = num + 3;
				}
			else if(numero[i] == '4')
			{
				j = j * 10;
				num = num + 4;
			}
			else if(numero[i] == '5')
			{
				j = j * 10;
				num = num + 5;
			}
			else if(numero[i] == '6')
			{
				j = j * 10;
				num = num + 6;
			}
			else if(numero[i] == '7')
			{
				j = j * 10;
				num = num + 7;
			}
			else if(numero[i] == '8')
			{
				j = j * 10;
				num = num + 8;
			}
			else if(numero[i] == '9')
			{
				j = j * 10;
				num = num + 9;
			}
			else
				num = num;
		}
		else
		{
			if(numero[i] == '1')
			{
				num = num +  j;
				j = j * 10;
			}
			else if(numero[i] == '2')
			{
				num = num + (2 * j);
				j = j * 10;
			}
			else if(numero[i] == '3')
			{
				num = num + (3 * j);
				j = j * 10;
			}
			else if(numero[i] == '4')
			{
				num = num + (4 * j);
				j = j * 10;
			}
			else if(numero[i] == '5')
			{
				num = num + (5 * j);
				j = j * 10;
			}
			else if(numero[i] == '6')
			{
				num = num + (6 * j);
				j = j * 10;
			}
			else if(numero[i] == '7')
			{
				num = num + (7 * j);
				j = j * 10;
			}
			else if(numero[i] == '8')
			{
				num = num + (8 * j);
				j = j * 10;
			}
			else if(numero[i] == '9')
			{
				num = num + (9 * j);
				j = j * 10;
			}
		}
		i--;
	}
	return num;
}


int main()
{
	char numero[256];
	int i;
	printf("Digite um n%cmero: ", 163);
	scanf("%s", &numero);
	printf("%i", returnnum(numero));
	return 0;
}
