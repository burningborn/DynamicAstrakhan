template<typename T>void pop_row_back(T**& arr, int& m, const int n)
{
	//1) Создаем буферный массив указателей нужного размера:
	T** buffer = new T * [--m]{};
	//2) Копируе мстроки в новый массив:
	for (int i = 0; i < m; i++)
	{
		buffer[i] = arr[i];
	}
	//3) Удаляем последнюю строку:
	delete[] arr[m];
	//4) Удаляем старый массив указателей:
	delete[] arr;
	//5) Сохраняем адрем нового массива:
	arr = buffer;
}