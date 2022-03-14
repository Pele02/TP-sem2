#include <stdlib.h>
#include <stdio.h>

int main()
{
	int x, k, i, cnt = 0;;
	printf("Dati un numar: ");
	scanf("%d", &x);

	for (i = 31; i >= 0; i--)
		{
			k = x >> i;
			if (k & 1)
			{
				printf("1");
				cnt++;
			}
		else
			printf("0");
		 }
	printf("\n%d", cnt);
	return 0;
}