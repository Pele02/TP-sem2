#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n, rez=0, put=1, rest, ogl=0, uc, cifra;
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
	printf("%d\n", ogl);


	while (ogl != 0)
	{
		cifra = ogl % 10;
		rez = rez + cifra * put;
		put = put * 2;
		ogl = ogl / 10;
	}
	printf("%d", rez);
	return 0;
}