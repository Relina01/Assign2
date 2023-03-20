#include <stdio.h>

double factorial_iter(int n)
{
	int i;
	double multi = 1;
	for (i = n; i > 0; i--)
	{
		multi = multi * i;
	}
	return multi;
}

double factorial_rec(int n)
{
	if (n <= 1) return 1;
	else return (n * factorial_rec(n - 1));
}

int main()
{
	int n = 20;

	double result_iter = factorial_iter(n);

	double result_rec = factorial_rec(n);

	printf("Iterative factorial result : %lf\n", result_iter);
	printf("Recursive factorial result : %lf\n", result_rec);
	return 0;
}