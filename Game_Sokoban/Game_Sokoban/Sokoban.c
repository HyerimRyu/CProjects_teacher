#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80

void Display(void);
void Move(void);
int Check(void);
void GoalPoint(void);

char Map[11][20] =
{
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
	5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,
	5,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,5,
	5,0,0,0,0,1,2,2,2,2,1,0,0,0,0,0,0,0,0,5,
	5,0,0,0,0,1,3,2,2,3,1,1,1,1,0,0,0,0,0,5,
	5,0,1,1,1,1,2,2,2,2,6,2,2,1,1,1,1,1,0,5,
	5,0,1,2,2,3,2,2,3,2,2,2,2,2,2,4,4,1,0,5,
	5,0,1,2,2,2,1,2,2,1,1,2,2,2,2,4,4,1,0,5,
	5,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,5,
	5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,
	5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
};
int x = 10, y = 5;
int Key, Count;
int Point[4][2];

void main()
{
	GoalPoint();
	while (1)
	{
		system("cls");
		Display();
		Move();
		if (Check())	break;
	}
}

void Display(void)
{
	int i, j;

	for (i = 0; i < 11; i++) {
		for (j = 0; j < 20; j++) {
			switch (Map[i][j])
			{
			case 0:				
				printf("  ");
				break;
			case 1:
				printf("¢Ê");
				break;
			case 2:
				printf("¤ý");
				break;
			case 3:
				printf("¡á");
				break;
			case 4:
				printf("¢Á");
				break;
			case 5:
				printf("¢Æ");
				break;
			case 6:
				printf("¢Ñ");
				break;
			}
		}
		printf("\n");
	}
	printf(" %d    %d \n", y, x);
}

void Move(void)
{
	int dx = 0, dy = 0;

	Key = getch();
	if (Key < 72 || Key>80) return;

	switch (Key)
	{
	case LEFT:
		dx = -1;;
		break;
	case RIGHT:
		dx = +1;
		break;
	case UP:
		dy = -1;
		break;
	case DOWN:
		dy = +1;
		break;
	}

	if (Map[y + dy][x + dx] != 1) {
		if (Map[y + dy][x + dx] == 3)
		{
			if (Map[y + dy * 2][x + dx * 2] == 1 ||
				Map[y + dy * 2][x + dx * 2] == 3) return;

			Map[y + dy * 2][x + dx * 2] = 3;
		}
		Map[y][x] = 2;
		y += dy; x += dx;
		Map[y][x] = 6;
	}
}

int Check(void)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (Map[Point[i][0]][Point[i][1]] != 3 &&
			Map[Point[i][0]][Point[i][1]] != 6)
			Map[Point[i][0]][Point[i][1]] = 4;
	}

	if (Map[Point[0][0]][Point[0][1]] == 3 &&
		Map[Point[1][0]][Point[1][1]] == 3 &&
		Map[Point[2][0]][Point[2][1]] == 3 &&
		Map[Point[3][0]][Point[3][1]] == 3) {
		system("cls");
		Display();
		printf(" Stage Clear!!!\n");
		return 1;
	}
	return 0;
}

void GoalPoint(void)
{
	int i = 0, j = 0;
	for (i = 0; i < 11; i++) {
		for (j = 0; j < 20; j++)
			if (Map[i][j] == 4)
			{
				Point[Count][0] = i;
				Point[Count][1] = j;
				Count++;
			}
	}
}