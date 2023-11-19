#include<stdio.h>//冒泡排序简易实现

void BubbleSort(int [], int);
void PrintArr(int [], int);
int main()
{
	int arr[] = { 3,1,5,7,9,2,4,0,8,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);//冒泡排序
	PrintArr(arr, sz);//打印函数
	return 0;
}

void BubbleSort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//每一样冒泡排序的过程；
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				arr[j] ^= arr[j + 1] ^= arr[j] ^= arr[j + 1];
			}
		}
	}
}

void PrintArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

#include<stdio.h>//结构体排序和打印
#include<math.h>
#include<string.h>

struct Stu
{
	char name[20];
	int age;
};


int cmp_stu_by_name(const void* p1, const void* p2);
void Print(struct Stu* p1, int sz);
int main()
{
	struct Stu arr[] = { {"zhangsan",20} ,{"lisi",38},{"wangwu",18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	Print(arr,sz);
	return 0;
}

int cmp_stu_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name,((struct Stu*)p2)->name);
}

void Print(struct Stu* p1,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s\n", (p1 + i)->name);
	}
}