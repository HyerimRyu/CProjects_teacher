#include <stdio.h>

void main()
{
	int Num;
	int Line = 1;
	int i;
	int Data, Data1;

	printf("ZigZag 숫자  출력프로그램입니다.\n");

	printf(" 출력하고자 하는 최대값을 입력하세요: ");
	scanf("%d", &Data);
	printf(" 한출에 출력하고자 하는 숫자의 개수를 입력 : ");
	scanf("%d", &Data1);

	i = Data1 - 1;

	for (Num = 1; Num <= Data + (Data1 - (Data%Data1)); Num++)
	{
		if (Line % 2)
		{
			if (Num > Data)
			{
				break;
			}
			printf("%d\t", Num);
		}
		else
		{
			if ((Num + i) > Data)
			{
				printf("\t");
			}
			else
			{
				printf("%d\t", Num + i);
			}
			i -= 2;
		}
		if (!(Num%Data1))
		{
			printf("\n");
			Line++;
			i = Data1 - 1;
		}
	}
}