//дһ�����ֲ��Һ���

//���ܣ���һ�����������в���ָ������ֵ���ҵ��˾ͷ����±꣬�Ҳ����ͷ��� - 1.
#include<stdio.h>
int bin_search(int arr[], int LEFT, int RIGHT, int KEY);

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int key = 0;//�����������
	scanf_s("%d", &key);
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}//�����鸳ֵ
	int b = bin_search(arr[10], left, right, key);//���庯����������
		printf("�ҵ��ˣ��±���%d\n", b);
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