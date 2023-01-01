#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n;
	printf("enter number of elements;");
	scanf("%d", &n);
	int x[n];
	
	double m = 0;
	double v = 0;
	for (int j = 0; j < n; j++)
	{
		printf("enter element");
		scanf("%d", &x[j]);
	}

	

	
	for (int j = 0; j < n; j++)
	{
		m += x[j];

	}
	
	for (int j = 0; j < n; j++)
	{
	
		v += pow((x[j] - m),2);
	}
	
	v = v / n;
	double s = sqrt(v);
	
	printf("mean is:%lf\n", m);
	printf("variance is:%lf\n", v);
	printf("standard deviation is:%lf\n", s);
	
	
	return 0;
}
