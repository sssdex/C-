#include<stdio.h>


int menu(int num)
{
	int a = 0;
		
		if (num == 1)
			return a = 1;
		else if (num == 1)
			return a = 1;
		else
			return a = menu(num - 1) + menu(num - 2);
		num--;
	
	return a;
}

int main()
{
	int num = 0;
	scanf_s("%d", num);
	int b = menu(num);
	printf("%d", b);
}