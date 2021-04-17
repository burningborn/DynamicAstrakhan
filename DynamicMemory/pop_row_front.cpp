template<typename T>void pop_row_front(T**& arr, int& m, const int n)
{
	T** buffer = new T * [--m]{};

	for (int i = 0; i < m; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr[0];
	delete[] arr;
	arr = buffer;
}