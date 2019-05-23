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

		printf(" 숫자로 하는 야구 게임입니다. \n\n");
		Count = 1;
		//printf(" %d %d %d\n", Num_100,Num_10,Num_1);

		while (1)
		{
			if (Count > 9)
			{
				printf("Game Over!! You Loser~~ ㅎㅎㅎㅎㅎ \n");
				break;
			}
			printf(" [%d회] \n", Count);

			do
			{
				printf(" 중복되지 않은 세자리의 숫자를 입력하세요 : ");
				scanf("%d", &Data);
				if (Data >= 1000)
				{
					printf(" 4자리는 입력불가.\n");
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
					printf(" 중복된 숫자는 입력할 수 없습니다. \n\n");
				}
			} while (1);

			if (Data == rNum)
			{
				printf(" 3S 입니다. You Win!!! \n");
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

				printf(" [%d]S  [%d]B 입니다. \n\n", Strike, Ball);
			}
			Strike = 0;
			Ball = 0;
			Count++;
		}
		printf(" 재경기를 하시겠습니까? (Y/N) : ");
		rewind(stdin);
		scanf("%c", &ReStart);
		if (ReStart == 'N' || ReStart == 'n')
			break;
		else printf("\n===================================\n");
	}
}



