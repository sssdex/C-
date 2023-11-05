//写一个二分查找函数

//功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1.
#include<stdio.h>
int bin_search(int arr[], int LEFT, int RIGHT, int KEY);

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int key = 0;//引入所需变量
	scanf_s("%d", &key);
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}//给数组赋值
	int b = bin_search(arr[10], left, right, key);//定义函数找所需数
		printf("找到了，下标是%d\n", b);
	return 0;
}
int bin_search(int arr[10], int LEFT, int RIGHT, int KEY)
{
	int find = -1;
	flag:
	while(LEFT <= RIGHT);
	{
		int mid = (LEFT + RIGHT) / 2;
		int num = arr[mid] - KEY;
		if (num < 0)
		{
			LEFT = mid + 1;
		}
		else if (num > 0)
		{
			RIGHT = mid - 1;
		}
		else(num = 0);
		{
			find = mid;
			LEFT = RIGHT + 1;
		}
	}
	return find;
}