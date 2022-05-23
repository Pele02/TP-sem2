#include<stdlib.h>
#include<stdio.h>

/*int main()
{
	FILE *f;
	int n, v[255], i=0;
	f = fopen("input.txt", "rt");
	fscanf(f, "%d", &n);
	while (!feof(f))
		fscanf(f, "%d", &v[i++]);
	fclose(f);
	
	return 0;
}*/

int rec(int v, int n, int i)
{
	if (i > n)
		return 0;
	if (v[i] > v[i + 1]);
		 return v[i]^rec(v, n, i + 1);

}

int main()
{
	int n, i, v[255];
	printf("Dati numarul de elemente:");
	scanf("%d", &n);
	printf("Dati elementele:\n");
	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i);
		scanf("%d", &v[i]);
	}
	for (i = 0; i < n; i++)
		rec(v, n, i)
		k++;
	
}

