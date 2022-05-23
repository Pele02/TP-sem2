#include<stdlib.h>
#include<stdio.h>

int main()
{
	FILE *f;
	int n, v[255], i=0;
	f = fopen("input.txt", "rt");
	fscanf(f, "%d", &n);
	while (!feof(f))
		fscanf(f, "%d", &v[i++]);
	fclose(f);
	
	return 0;
}