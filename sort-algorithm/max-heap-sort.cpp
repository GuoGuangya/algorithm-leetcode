#include <iostream>

using namespace std;

void display(int array[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
}

//大顶堆：arr[i] >= arr[2i+1] && arr[i] >= arr[2i+2]
//小顶堆：arr[i] <= arr[2i+1] && arr[i] <= arr[2i+2]
void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void HeapSort(int array[], int size)
{
	int min = size / 2;
	for (int i = min; i >= 0; i--)
	{
		if (2 * i + 2 < min)//有两个子节点
		{
			if (array[i] < array[2 * i + 1])
			{
				swap(&array[i], &array[2 * i + 1]);
			}
			if (array[i] < array[2 * i + 2])
			{
				swap(&array[i], &array[2 * i + 2]);
				if (array[i] < array[2 * i + 1])
				{
					swap(&array[i], &array[2 * i + 1]);
				}
			}
		}
	}
}

int main()
{
	int array[] = { 3, 8, 4, 6, 1 };
	display(array, 5);
	HeapSort(array, 5);
	return 0;
}
