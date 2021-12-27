
#include <iostream>

using namespace std;

/**
 * 快速排序
 *  @param nNum  数组的个数
 *  @param first 数组的起始下标
 *  @param last  数组最后一个下标
 * */
void sort_quick(int* array, int first, int last)
{
	if (first < last)
	{
		int flag = array[first];
		int f = first, l = last;
		while (f < l)
		{
			while (l > f && array[l] > flag)
			{
				l--;
			}
			if (f < l)
				array[f++] = array[l];

			while (l > f && array[f] < flag)
				f++;
			if (f < l)
				array[l--] = array[f];
		}
		array[l] = flag;
		sort_quick(array, first, l-1);
		sort_quick(array, l + 1, last);
	}
}

int main()
{
	int array[] = { 5,  9, 1, 2, 3, 4 };
	sort_quick(array, 0, 5);
	for (int i: array)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}