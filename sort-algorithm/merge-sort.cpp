
#include <iostream>

using namespace std;


static void merge_array(int array[], int first, int mid, int last, int tmp[])
{
	int i = first, j = mid + 1; // i为第一组的起点, j为第二组的起点
	int m = mid, n = last;
	int k = 0;
	while (i <= m && j <= n)
	{
		if (array[i] < array[j])
			tmp[k++] = array[i++];
		else
			tmp[k++] = array[j++];
	}

	while (i <= mid)
	{
		tmp[k++] = array[i++];
	}
	while (j <= last)
	{
		tmp[k++] = array[j++];
	}
	for (i = 0; i < k; i++)
	{
		array[first + i] = tmp[i];
	}
}

/**
 * 归并排序
 *  @param nNum  数组的个数
 *  @param first 数组的起始下标
 *  @param last  数组最后一个下标
 * */
void sort_merge(int* array, int first, int last, int tmp[])
{
	if (first < last)
	{
		int nCenter = (first + last) / 2;
		sort_merge(array, first, nCenter, tmp);
		sort_merge(array, nCenter + 1, last, tmp);
		merge_array(array, first, nCenter, last, tmp);
	}

}


int main()
{
	int array[] = { 5, 9, 1, 2, 3, 4 };
	int tmp[6] = { 0 };
	sort_merge(array, 0, 5, tmp);
	for (int i: array)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}