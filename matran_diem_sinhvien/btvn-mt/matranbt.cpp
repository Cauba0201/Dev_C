#include "stdio.h"
#include "math.h"

int main()
{
	int m, n, i, j;
	float **a; // a[10][12]
	FILE *fr, *fw;
	// nhap ma tran a tu tep fr
	fr = fopen("matran.txt", "rt");
	if (fr == NULL)
	{
		puts("Invalid matran.txt");
		return 0;
	}
	fscanf(fr, "%d%d", &m, &n);
	a = (float **)new float[m * n];
	for (i = 0; i < m; i++)
	{
		a[i] = new float[n];
		for (j = 0; j < n; j++)
		{
			fscanf(fr, "%f", &a[i][j]);
		}
		fscanf(fr, "\n");
	}
	puts("ma tran ban dau la");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%7.1f", a[i][j]);
		printf("\n");
	}
	printf("\n----------------------------------\n");
	// tinh tbc cua ma tran
	float tbc;
	tbc = 0;
	int sum = 0;
	int count = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] < 0)
			{
				sum += a[i][j];
				count++;
			}
	tbc = sum / count;
	printf("\ntbc cua ma tran la: ");
	printf("\ntbc: %.2f\n", tbc);
	printf("\n----------------------------------\n");

	// btvn Nguyen Van An's exercises

	// cau2.3
	// tinh tong tung hang
	for (i = 0; i < m; i++)
	{
		int sum2 = 0;
		printf("Tong cua hang %d: ", i);
		for (j = 0; j < n; j++)
		{
			sum2 += a[i][j];
		}
		printf("%d\n", sum2);
	}
	return 0;
}

// btvn Nguyen Van An's exercises
