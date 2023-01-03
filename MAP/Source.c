#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void citire(int a[][20], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++) 
	{
		for (j = 0; j < n; j++) 
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void afisare(int mat [][20], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", mat[i][j]);
		}

		printf("\n");
	}
}

int main()
{
	int mat[20][20], m, n;

	printf("m="); 
	scanf("%d", &m);

	printf("n="); 
	scanf("%d", &n);


	citire(mat, m, n);
	afisare(mat, m, n);
	return 0;
}