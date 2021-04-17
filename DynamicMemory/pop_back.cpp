template<typename T>void pop_back(T*& arr, int& n)
{
	T* buffer = new T[--n]{};	
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
}