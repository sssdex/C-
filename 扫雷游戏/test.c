#include"ɨ��.h"
void menu()
{
	printf("*****************************\n");
	printf("*********1.play**************\n");
	printf("*********0.exit**************\n");
	printf("*****************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };  //�洢��

	char show[ROWS][COLS] = { 0 };  //�洢�׵���Ϣ
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}



