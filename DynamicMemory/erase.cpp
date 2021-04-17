template<typename T>void erase(T*& arr, int& n, int index)
{
	T* buffer = new T[--n]{};
	
	for (int i = 0; i < n; i++)
	{	
		buffer[i] = arr[i < index ? i : i + 1];
	}
	delete[] arr;
	arr = buffer;   
}