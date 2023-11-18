#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	int* pa = &n;
	scanf_s("%d", pa);
	int count = 0;
	//while (n)
	////{
	//	n /= 10;
	//	count++;
	//}
	while (n >= 20)
		printf("hello,world");
	return 0;
}