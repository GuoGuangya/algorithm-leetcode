#include <iostream>
#include <algorithm>

using namespace std;
#define N 7
int value[N] = { 1, 2, 5, 10, 20, 50, 100 }; /* 钱的种类 */
int count[N] = { 10, 10, 10, 10, 10, 10, 10 }; /* 不同钱的种类_张数*/

/*
* 对于输入的零钱, 找到至少要用的纸币的数量
* @param money - 要找/支付的零钱数
* @return 至少要用的纸币的数量, -1 表示找不开
*/
//int solve(int money)
//{
//	int num = 0;
//	for (int i = N - 1; i >= 0; i--)
//	{
//		int j = money / value[i];
////		int c = j > count[i] ? count[i] : j;
//		printf("需要用面值 %d 的纸币 %d 张\n", value[i], c);
//		money = money - c * value[i];
//		num = num + c;
//		if (money == 0) break;
//	}
//	if (money > 0)
//	{
//		num = -1;
//	}
//	return num;
//}

int main()
{
	int array[] = { 0, 5, 2, 3, 1 };

	sort(array, array+5);
	for(int i =0 ; i < 5 ; i++)
	{
		std::cout << array[i] << " " << endl;
	}
	int money = 0;
//	int num = 0;
//
//	printf("请输入要支付的零的数目: \n");
//	scanf("%d", &money);
//
//	num = solve(money);
//
//	if (num == -1)
//	{
//		printf("对不起,找不开\n");
//	}
//	else
//	{
//		printf("成功的使用至少%d 张纸币实现找零/支付! \n", num);
//	}
	return 0;
}