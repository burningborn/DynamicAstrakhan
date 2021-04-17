template<typename T>void erase_row(T**& arr, int& m, const int n, int index)
{
	T** buffer = new T * [--m];

	for (int i = 0; i < index; i++)
	{
		buffer[i] = arr[i];
	}
	for (int i = index; i < m; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete arr[index];
	delete arr;
	arr = buffer;
}