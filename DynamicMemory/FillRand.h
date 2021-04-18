#pragma once
//template<typename T>void FillRand(T arr[], const int n);
//template<typename T>void FillRand(T** arr, const int m, const int n);
void FillRand(double arr[], const int n);
void FillRand(double** arr, const int m, const int n);

template<typename T>void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
template<typename T>void FillRand(T** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
