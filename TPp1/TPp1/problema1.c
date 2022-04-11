#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n, rez=0, put=1, rest;
	printf("Dati numarul dorit: ");
	scanf("%d", &n);
	while (n != 0)
	{
		rest = n % 2;
		rez = rez + rest * put;
		put = put * 10;
		n = n / 2;
	}
	printf("%d", rez);
	return 0;
}