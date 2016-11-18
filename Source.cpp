#include<iostream>

void gnomsort(double *a, int size);

int main()
{
	int n;
	std::cin >> n;
	double *a = new double[n];
	for (int i = 0; i < n; ++i)
		std::cin >> a[i];
	gnomsort(a, n);
	system("pause");
	return 0;
}

void gnomsort(double *a, int size)
{
	int i = 0;
	while (i < size)
	{
		if (i == 0 || abs(a[i - 1]) <= abs(a[i]))
			++i;
		else
		{
			double tmp = a[i];
			a[i] = a[i - 1];
			a[i - 1] = tmp;
			--i;
		}
	}
	for (int i = 0; i < size; ++i)
		std::cout << a[i] << " ";
}