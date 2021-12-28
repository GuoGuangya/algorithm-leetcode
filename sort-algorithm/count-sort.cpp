#include <iostream>

using namespace std;

/**
 * 计数排序
 *  @param nNum  	数组的个数
 *  @param count  	数组元素的个数
 * */
void sort_count(int array[], int count)
{
	int min = *array;
	int max = *array;
	for (int i = 0; i < count; i++)
	{
		min = array[i] > min ? min : array[i];
		max = array[i] < max ? max : array[i];
	}
	int interval_num = max - min + 1;
	int* p = (int*)calloc(interval_num, sizeof(int));

	for (int i = 0; i < count; i++)
	{
		p[array[i] - min]++;
	}

	int k = 0;
	for (int i = 0; i < interval_num; i++)
	{
		for (; p[i] != 0; p[i]--)
		{
			array[k++] = min + i;
		}
	}
}


int main()
{
	int array[] = { 5, 9, 1, 2, 3, 4, 2, 345, 67, 32, 2, 678 };
	sort_count(array, 12);
	for (int i: array)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}