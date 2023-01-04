#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void citire(int a[][20], int m, int n)
{
	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void afisare(int a[][20], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
}

void sumaPr(int a[][20], int m, int n)
{
	int suma = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				suma = suma + a[i][i];
			}
		}
	}
	printf("%d\n", suma);
}

void sumaSec(int a[][20], int m, int n)
{
	int suma = 0;
	if (m == n)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i + j == m - 1)
				{
					suma = suma + a[i][j];
				}
			}
		}
		printf("%d\n", suma);
	}
	else
	{
		printf("Nu exista diagonala secundara, deoarece matricea nu este patratica.\n");
	}
}

void minMaxPr(int a[][20], int m, int n)
{
	int max = INT_MIN, min = INT_MAX;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j)
			{
				if (a[i][j] > max) 
				{
					max = a[i][j];
				}

				if (a[i][j] < min)
				{
					min = a[i][j];
				}
			}
		}
	}
	printf("max: %d\n", max);
	printf("min: %d\n", min);
}

minMaxSec(int a[][20], int m, int n)
{
	int max = INT_MIN, min = INT_MAX;
	if (m == n)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i + j > m - 1)
				{
					if (a[i][j] > max)
					{
						max = a[i][j];
					}

					if (a[i][j] < min)
					{
						min = a[i][j];
					}
				}
			}
		}
		printf("max: %d\n", max);
		printf("min: %d\n", min);
	}
	else
	{
		printf("Nu exista diagonala secundara, deoarece matricea nu este patratica.\n");
	}
}

int main()
{
	int a[20][20], m, n;

	printf("m= "); 
	scanf("%d", &m);

	printf("n= "); 
	scanf("%d", &n);

	citire(a, m, n);

	printf("Afisarea matricei de baza.\n");
	afisare(a, m, n);

	printf("\nAfisarea sumei diagonalei principale.\n");
	sumaPr(a, m, n);

	printf("\nAfisarea sumei diagonalei secundare.\n");
	sumaSec(a, m, n);

	printf("\nMaximul si minimul elementelor aflate sub diagonala principala.\n");
	minMaxPr(a, m, n);

	printf("\nMaximul si minimul elementelor aflate sub diagonala secundara.\n");
	minMaxSec(a, m, n);

	return 0;
}