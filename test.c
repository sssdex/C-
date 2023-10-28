#include<stdio.h>
#include<math.h>

//way 1
//int main()
//{
//	int x = 0;
//	int i = 0;
//	unsigned int count = 0;
//        	for (x = 2; x < 1000; x++)
//	{
//		for (i = 2; i < x; i++)
//		{
//			count++;
// 			if (x % i == 0)
//			{
//				break;
//			}
//		}
//	if (x == i)	
//		{
//			printf("%d  ", x);
//		}
//	}
//			printf("\n\n\n运算的次数： % d", count);
//
//	return 0;
//}

//way 2
//int main(//{
//	int x = 0;
//	int i = 0;
//	unsigned int count = 0;
//	
//	x = 2;
//	printf("%d", x);
//
//	for (x = 3; x < 1000; x += 2)
//	{
//		for (i = 2; i < x; i++)
//		{
//			count++;
//			if (x % i == 0)
//			{
//				break;
//			}//		}
//		if (x == i)
//		{
//			printf("%d  ", x);
//		}
//	}
//	printf("\n\n\n\n运算次数是:%d", count);
//	return 0;
//}

//way 3
//int main()
//{
//	int x = 0;
//	int i = 0;
//	unsigned int count = 0;
//
//	x = 2;
//	printf("%d ", x);
//
//	for (x = 3; x < 1000; x += 2)
//	{
//		for (i = 3; i < x; i+=2)
//		{
//			count++;
//			if (x % i == 0)
//			{
//				break;
//			}
//		}
//		if (x == i)
//		{
//			printf("%d  ", x);
//		}
//	}
//	printf("\n\n\n\n运算次数是:%d", count);
//	return 0;
//}



//WAY 4 :sqrt()开平方

//int main()
//{
//	int x = 0;
//	int i = 0;
//	unsigned int count = 0;
//	for (x = 2; x < 1000; x++)
//	{
//		for (i = 2; i < x; i++)
//		{
//			count++;
//			if (x % i == 0)
//			{
//				break;
//			}
//		}
//		if (x == i)
//		{
//			printf("%d  ", x);
//		}
//	}
//	printf("\n\n\n运算的次数： % d", count);
//
//	return 0;

//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	    i = 2;
//		int num = 0;
//		printf("2");
//		for (i = 3; i <= 1000; i += 2)
//		{
//			int flag = 1;
//			for (j = 3; j <= sqrt(i); j += 2)
//			{
//				if (i % j == 0)
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag == 1)
//			{
//				printf("%d ", i);
//				num++;
//			}
//		}
//		printf("\n\n\n%d\n", num);
//	
//	return 0;
//}