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
	printf("����������������\n");
	scanf_s("%d%d", &x, &y);
	ret = pf(x, y);
	printf("����Ľ����%d\n", ret);
}

void menu()
{
	printf("********************************\n");
	printf("****     1. �ӷ�  2.����    ****\n");
	printf("****     3. �˷�  4.����    ****\n");
	printf("****     5. �ݴ�  0.�˳�    ****\n");
	printf("********************************\n");
	printf("��ѡ��");
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
			printf("�Ƴ�������\n");
			break;
		default:
			printf("�����������������\n");
		}
	} while (input);
	return 0;
};

