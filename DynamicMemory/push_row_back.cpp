template<typename T>void push_row_back(T**& arr, int& m, const int n)
{	
	T** buffer = new T * [m + 1]{};	
	for (int i = 0; i < m; i++)
	{
		
		buffer[i] = arr[i];	
	}
	
	delete[] arr;	
	arr = buffer;	
	arr[m] = new T[n]{};
	m++;
}