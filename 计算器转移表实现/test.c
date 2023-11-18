#include<stdio.h>
#include<math.h>
int Plu(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int Pow(int x, int y)
{
	return pow(x, y);
}

void menu()
{
	printf("*******************************\n");
	printf("******  1.Plu   2.Sub   *******\n");
	printf("******  3.Mul   4.Div   *******\n");
	printf("******  5.Pow   0.exit  *******\n");
	printf("请选择\n");
}

int main()
{
	int x, y,num;
	do
	{
		menu();
		scanf_s("%d", &num);
		int (*p1[])(int x, int y) = { NULL,Plu,Sub,Mul,Div,Pow };
		
		if (num >= 1 && num <= 5)
		{
			printf("请输入两个数");
			scanf_s("%d%d", &x, &y);
			int key = (*p1[num])(x, y);
			printf("计算结果是%d\n", key);
		}
		else if (num == 0)
			printf("退出计算器\n");
		else
			printf("输入错误");
	} while (num);
	return 0;
}