template<typename T>void insert_row(T**& arr, int& m, const int n, int index)
{
	T** buffer = new T * [m + 1]{};
	for (int i = 0; i < index; i++)
	{
		buffer[i] = arr[i];
	}
	for (int i = index; i < m + 1; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[index] = new T[n]{};
	m++;
}