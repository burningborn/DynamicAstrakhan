template<typename T>void push_front(T*& arr, int& n, T value)
{
	T* buffer = new T[n + 1/*Сложить, суммировать*/]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];	//Копируем элементы СО СМЕЩЕНИЕМ НА ОДИН ЭЛЕМЕНТ ВПРАВО
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
}