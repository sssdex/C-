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


//初始化棋盘
InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
DisplayBoard(char board[ROWS][COLS], int row, int col); 
//布置雷
SetMine(char board[ROWS][COLS], int row, int col);
//排查雷
FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//计算格子周围雷的数量
get_mine_count(char mine[ROWS][COLS], int x, int y);
