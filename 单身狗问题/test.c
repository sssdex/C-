//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//
//��дһ�������ҳ�������ֻ����һ�ε����֡�
//
//
//
//���磺
//
//�������Ԫ���ǣ�1��2��3��4��5��1��2��3��4��6
//
//ֻ��5��6ֻ����1�Σ�Ҫ�ҳ�5��6

#include<stdio.h>
#include<math.h>

int compare(const void* p1, const void* p2);
void FindSingle(int* p1,int num);

int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), compare);
	FindSingle(arr,sz);
	return 0;
}

int compare(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}

void FindSingle(int* p1,int num)
{
	int i = 0;
	if (*p1 != *(p1 + 1))
		printf("%d\n", *p1);
	p1 = p1 + 1;
	for (i = 0; i < num - 1; i++)
	{
		if ((*(p1 + i) != *(p1 + 1 + i)) && (*(p1 + i) != *(p1 - 1 + i)))
			printf("%d\n", *(p1 + i));
	}
}

#include <stdio.h>

#include <stdio.h>

//int main() {
//    int a, b;
//    while (scanf_s("%d %d", &a, &b) != EOF)
//    { // ע�� while ������ case
//         64 λ������� printf("%lld") to 
//        if (a / 400 == 0 || a / 4 == 0 && a / 100 != 0)
//        {
//            if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
//                printf("31");
//            else if (b == 2)
//                printf("29");
//            else
//                printf("30");
//        }
//        else
//        {
//            if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
//                printf("31");
//            else if (b == 2)
//                printf("28");
//            else
//                printf("30");
//        }
//        return 0;
//    }
//}