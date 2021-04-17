template<typename T>void pop_row_back(T**& arr, int& m, const int n)
{
	//1) ������� �������� ������ ���������� ������� �������:
	T** buffer = new T * [--m]{};
	//2) ������� ������� � ����� ������:
	for (int i = 0; i < m; i++)
	{
		buffer[i] = arr[i];
	}
	//3) ������� ��������� ������:
	delete[] arr[m];
	//4) ������� ������ ������ ����������:
	delete[] arr;
	//5) ��������� ����� ������ �������:
	arr = buffer;
}