#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n, i, ;
	printf("Dati numarul dorit: ");
	scanf("%d", &n);
	for (i = 1; n >= 0; i++)
	{
		binar[i] = n % 2;
		n /= 2;
	}

	return 0;
}