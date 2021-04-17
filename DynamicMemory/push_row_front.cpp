template<typename T>void push_row_front(T**& arr, int& m, const int n)
{	
	T** buffer = new T * [m + 1]{};
	
	for (int i = 0; i < m; i++)
	{
		buffer[i + 1] = arr[i];
	}
	
	delete[] arr;	
	arr = buffer;	
	arr[0] = new T[n]{};	
	m++;
}