#include <stdio.h>
#include <stdlib.h>
#include <time.h>









void main()
{
	int rNum;
	int Data;
	int Num_100, Num_10, Num_1;
	int Data_100, Data_10, Data_1;
	int Strike = 0, Ball = 0;
	int Count;
	char ReStart;

	while (1)
	{
		do
		{
			srand(time(NULL));
			rNum = rand() % 1000;

			Num_100 = rNum / 100;
			Num_10 = (rNum % 100) / 10;
			Num_1 = rNum % 10;

		} while (Num_100 == Num_10 || Num_100 == Num_1 || Num_10 == Num_1);

		printf(" ���ڷ� �ϴ� �߱� �����Դϴ�. \n\n");
		Count = 1;
		//printf(" %d %d %d\n", Num_100,Num_10,Num_1);

		while (1)
		{
			if (Count > 9)
			{
				printf("Game Over!! You Loser~~ ���������� \n");
				break;
			}
			printf(" [%dȸ] \n", Count);

			do
			{
				printf(" �ߺ����� ���� ���ڸ��� ���ڸ� �Է��ϼ��� : ");
				scanf("%d", &Data);
				if (Data >= 1000)
				{
					printf(" 4�ڸ��� �ԷºҰ�.\n");
					continue;
				}
				printf("\n");

				Data_100 = Data / 100;
				Data_10 = (Data % 100) / 10;
				Data_1 = Data % 10;

				if (!(Data_100 == Data_10 || Data_100 == Data_1 || Data_10 == Data_1))
				{
					break;
				}
				else
				{
					printf(" �ߺ��� ���ڴ� �Է��� �� �����ϴ�. \n\n");
				}
			} while (1);

			if (Data == rNum)
			{
				printf(" 3S �Դϴ�. You Win!!! \n");
				break;
			}
			else
			{
				if (Data_100 == Num_100)
				{
					Strike++;
				}
				else if (Data_100 == Num_10 || Data_100 == Num_1)
				{
					Ball++;
				}

				if (Data_10 == Num_10)
				{
					Strike++;
				}
				else if (Data_10 == Num_100 || Data_10 == Num_1)
				{
					Ball++;
				}

				if (Data_1 == Num_1)
				{
					Strike++;
				}
				else if (Data_1 == Num_100 || Data_1 == Num_10)
				{
					Ball++;
				}

				printf(" [%d]S  [%d]B �Դϴ�. \n\n", Strike, Ball);
			}
			Strike = 0;
			Ball = 0;
			Count++;
		}
		printf(" ���⸦ �Ͻðڽ��ϱ�? (Y/N) : ");
		rewind(stdin);
		scanf("%c", &ReStart);
		if (ReStart == 'N' || ReStart == 'n')
			break;
		else printf("\n===================================\n");
	}
}



