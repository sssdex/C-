#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#pragma once

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10


//��ʼ������
InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//��ӡ����
DisplayBoard(char board[ROWS][COLS], int row, int col); 
//������
SetMine(char board[ROWS][COLS], int row, int col);
//�Ų���
FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//���������Χ�׵�����
get_mine_count(char mine[ROWS][COLS], int x, int y);
