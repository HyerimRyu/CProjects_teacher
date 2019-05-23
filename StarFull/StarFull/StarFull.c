#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define EMPTY 0
#define WALL 1
#define BOX 2

void display();
void inputAndMove();
int check();
int checkFail();

char Map[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,0,0,1,1,0,0,0,1},
	{1,0,0,0,1,1,0,0,0,1},
	{1,0,0,0,1,1,0,0,0,1},
	{1,0,0,0,1,1,0,0,0,1},
	{1,0,0,0,0,0,0,0,1,1},
	{1,1,1,0,0,0,0,0,0,1},
	{1,1,1,0,0,0,0,0,0,1},
	{1,0,0,0,1,1,1,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

//Box의 현재 위치좌표(배열의 층,호실)
int Ypos = 1;
int Xpos = 1;

void main()
{
	while (1)
	{
		//화면을 지워라!!!
		system("cls");

		//Map배열의 저장값들을 출력!!(그림을 그려라!!)
		display();

		//게임이 종료되었는지 검사!하며 종료조건이 되면 while break;
		if (check())
		{
			//Game over상황
			printf(" STAGE CLEAR ~~~~\n");
			break;
		}

		//게임실패인지 검사!
		if (checkFail())
		{
			printf(" FAIL @@@ \n");
			break;
		}

		//사용자로부터 방향키 입력받아 BOX를 이동하도록.
		inputAndMove();				

	}//while	

	printf("\n  #### GAME OVER!!!!! #### \n");
}//main function

//게임실패검사 함수
int checkFail()
{
	if (Map[Ypos][Xpos - 1] != 0 &&
		Map[Ypos][Xpos + 1] != 0 &&
		Map[Ypos - 1][Xpos] != 0 &&
		Map[Ypos + 1][Xpos] != 0 ) return 1;

	return 0;
}


//게임종료 체크 함수
int check()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (Map[y][x] == 0) {
				return 0;
			}
		}
	}

	return 1;
}


//사용자로부터 방향키 입력받아 BOX를 이동시키는 기능의 함수정의
void inputAndMove()
{
	int key;
	key = getch();
	key = getch();

	switch (key)
	{
	case 75:
		if ( Map[Ypos][Xpos-1] != EMPTY ) return;
		
		Xpos--;
		Map[Ypos][Xpos] = BOX;
		break;

	case 77:
		if (Map[Ypos][Xpos+1] != EMPTY) return;

		Xpos++;
		Map[Ypos][Xpos] = BOX;
		break;

	case 72:
		if (Map[Ypos-1][Xpos] != EMPTY) return;

		Ypos--;
		Map[Ypos][Xpos] = BOX;
		break;

	case 80:
		if (Map[Ypos+1][Xpos] != EMPTY) return;

		Ypos++;
		Map[Ypos][Xpos] = BOX;
		break;		
	}

}


//Map배열의 저장값들을 출력하는 기능의 함수정의
void display()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			switch (Map[y][x])
			{
			case EMPTY:
				printf("  ");
				break;

			case WALL:
				printf("□");
				break;

			case BOX:
				printf("■");
				break;
			}
		}
		printf("\n");
	}
}