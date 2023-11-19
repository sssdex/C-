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

void Calc(int(*pf)(int, int))
{
	int x, y,ret;
	printf("请输入两个操作数\n");
	scanf_s("%d%d", &x, &y);
	ret = pf(x, y);
	printf("计算的结果是%d\n", ret);
}

void menu()
{
	printf("********************************\n");
	printf("****     1. 加法  2.减法    ****\n");
	printf("****     3. 乘法  4.出发    ****\n");
	printf("****     5. 幂次  0.退出    ****\n");
	printf("********************************\n");
	printf("请选择");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Plu);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 5:
			Calc(Pow);
			break;
		case 0:
			printf("推出计算器\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);
	return 0;
};

