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

//Box�� ���� ��ġ��ǥ(�迭�� ��,ȣ��)
int Ypos = 1;
int Xpos = 1;

void main()
{
	while (1)
	{
		//ȭ���� ������!!!
		system("cls");

		//Map�迭�� ���尪���� ���!!(�׸��� �׷���!!)
		display();

		//������ ����Ǿ����� �˻�!�ϸ� ���������� �Ǹ� while break;
		if (check())
		{
			//Game over��Ȳ
			printf(" STAGE CLEAR ~~~~\n");
			break;
		}

		//���ӽ������� �˻�!
		if (checkFail())
		{
			printf(" FAIL @@@ \n");
			break;
		}

		//����ڷκ��� ����Ű �Է¹޾� BOX�� �̵��ϵ���.
		inputAndMove();				

	}//while	

	printf("\n  #### GAME OVER!!!!! #### \n");
}//main function

//���ӽ��а˻� �Լ�
int checkFail()
{
	if (Map[Ypos][Xpos - 1] != 0 &&
		Map[Ypos][Xpos + 1] != 0 &&
		Map[Ypos - 1][Xpos] != 0 &&
		Map[Ypos + 1][Xpos] != 0 ) return 1;

	return 0;
}


//�������� üũ �Լ�
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


//����ڷκ��� ����Ű �Է¹޾� BOX�� �̵���Ű�� ����� �Լ�����
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


//Map�迭�� ���尪���� ����ϴ� ����� �Լ�����
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
				printf("��");
				break;

			case BOX:
				printf("��");
				break;
			}
		}
		printf("\n");
	}
}