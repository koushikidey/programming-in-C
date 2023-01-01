#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n;
	printf("enter number of columns;");
	scanf("%d", &n);
	int x[2][n];
	
	double s = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("enter element");
			scanf("%d", &x[i][j]);
		}
	}
	
	int y[2][n];
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("enter element");
			scanf("%d", &y[i][j]);
		}
	}
	
	for (int j = 0; j < n; j++)
		
			s += sqrt ( abs( (x[1][j] * x[1][j]- x[0][j] * x[0][j]) - (y[1][j] * y[1][j]- y[0][j] * y[0][j])));
	
	s = s / n;
	printf("Result is:%lf\n", s);
	
	return 0;
}
	
	
