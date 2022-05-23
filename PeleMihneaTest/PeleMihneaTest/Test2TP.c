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

int rec(int a[], int n, int i)
{
	int j;
	if (i > n)
		return 0;
	if (a[i] > a[i + 1]);
		return a[i]~a[j];
		else  return rec(v, n, i + 1);

}

int main()
{
	int n, i, v[255];
	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i);
		scanf("%d", &v[i]);
	}
	for (i = 0; i < n; i++)
	printf("%d", rec(v,n,i))
	
}

