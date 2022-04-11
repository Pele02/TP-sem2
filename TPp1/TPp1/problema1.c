#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n, rez=0, put=1, rest, ogl=0, uc;
	printf("Dati numarul dorit: ");
	scanf("%d", &n);
	while (n != 0)
	{
		rest = n % 2;
		rez = rez + rest * put;
		put = put * 10;
		n = n / 2;
	}
	while (rez != 0)
	{
		uc = rez % 10;
		rez = rez / 10;
		ogl = ogl * 10 + uc;
	}
	printf("%d", ogl);
	return 0;
}