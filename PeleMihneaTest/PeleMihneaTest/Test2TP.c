#include<stdlib.h>
#include<stdio.h>

int main()
{
	FILE *f;
	int n;
	f = fopen("input.txt", "rt");
	fscanf(f, "%d", &n);
	while (!feof(f))
	{
		fscanf(f, "%d", &v[i++]);
	}
	return 0;
}