//
// Created by BeanGuohui on 2021/12/27.
//
#include <iostream>

using namespace std;

/**
 * 冒泡排序
 *  @param array 数组的起始地址
 *  @param nNum  数组的个数
 * */
void sort_bubble(int* array, int nNum)
{
	for (int i = 0; i < nNum; i++)
	{
		for (int j = 0; j < nNum - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				int nTmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = nTmp;
			}
		}
	}
}


int main()
{
	int array[] = { 3, -1, 1, 5, 6, 9, 7 };
	sort_bubble(array, 7);
	for (int i : array)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}