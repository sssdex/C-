#include"扫雷.h"
void menu()
{
	printf("*****************************\n");
	printf("*********1.play**************\n");
	printf("*********0.exit**************\n");
	printf("*****************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };  //存储雷

	char show[ROWS][COLS] = { 0 };  //存储雷的信息
	InitBoard(mine, ROWS, COLS, '0');

	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
    FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}



