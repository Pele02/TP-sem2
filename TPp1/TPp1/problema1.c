#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n, i, k, nr[34],cnt;
	printf("Dati numarul dorit: ");
	scanf("%d", &n);
	for (i = 31; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			nr[cnt] = '1';
			cnt++;
		}
		else
			nr[cnt] = '0';
		cnt
	}

	return 0;
}