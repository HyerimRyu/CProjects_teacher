#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80 

void DisplayMap(void);
void Move(void);
int Check(void);

char Map[10][10] =
{
	1,1,1,1,1,1,1,1,1,1,
	1,2,0,0,1,1,0,0,0,1,
	1,0,0,0,1,1,0,0,0,1,
	1,0,0,0,1,1,0,0,0,1,
	1,0,0,0,1,1,0,0,0,1,
	1,0,0,0,0,0,0,0,1,1,
	1,1,1,0,0,0,0,0,0,1,
	1,1,1,0,0,0,0,0,0,1,
	1,0,0,0,1,1,1,0,0,1,
	1,1,1,1,1,1,1,1,1,1 };

int Point_x = 1, Point_y = 1;
int Key;
int Count = 0;

void main()
{
	Check();
	while (1)
	{
		system("cls");
		Move();
		Count = 0;
		if (Check())	break;
	}
}

void DisplayMap(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			switch (Map[i][j])
			{
			case 0:
				printf("  ");
				break;
			case 1:
				printf("¡à");
				break;
			case 2:
				printf("¡á");
				break;
			}
		}
		printf("\n");
	}
	printf(" XÁÂÇ¥ : [%d]  YÁÂÇ¥ : [%d] \n", Point_x, Point_y);
	printf(" ³²Àº °ø°£ : [%d] \n", Count);
}

void Move(void)
{
	DisplayMap();
	Key = getch();

	switch (Key)
	{
	case LEFT:
		if (Map[Point_y][Point_x - 1] == 0)
		{
			--Point_x;
			Map[Point_y][Point_x] = 2;
			break;
		}
		else break;
	case RIGHT:
		if (Map[Point_y][Point_x + 1] == 0)
		{
			++Point_x;
			Map[Point_y][Point_x] = 2;
			break;
		}
		else break;
	case UP:
		if (Map[Point_y - 1][Point_x] == 0)
		{
			--Point_y;
			Map[Point_y][Point_x] = 2;
			break;
		}
		else break;
	case DOWN:
		if (Map[Point_y + 1][Point_x] == 0)
		{
			++Point_y;
			Map[Point_y][Point_x] = 2;
			break;
		}
		else break;
	}

}

int Check(void)
{
	int i = 0, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			if (Map[i][j] == 0) Count++;
	}
	if (Count == 0)
	{
		system("cls");
		DisplayMap();
		printf(" Stage Clear!!!\n");
		return 1;
	}
	return 0;
}