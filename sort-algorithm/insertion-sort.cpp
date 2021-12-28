#include <iostream>

using namespace std;

void sort_insertion(int array[], int len)
{
	for (int i = 1; i < len; i++)
	{
		if (array[i] < array[i - 1])
		{
			array[i] = array[i] ^ array[i - 1];
			array[i - 1] = array[i] ^ array[i - 1];
			array[i] = array[i] ^ array[i - 1];
			for (int n = i; n > 0; n--)
			{
				if (array[n] < array[n - 1])
				{
					array[n] = array[n] ^ array[n - 1];
					array[n - 1] = array[n] ^ array[n - 1];
					array[n] = array[n] ^ array[n - 1];
				}
			}
		}
	}
}


int main()
{
	int array[] = { 5, 9, 1, 2, 3, 4 };
	sort_insertion(array, 6);
	for (int i: array)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}