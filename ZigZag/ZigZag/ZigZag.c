#include <stdio.h>

void main()
{
	int Num;
	int Line = 1;
	int i;
	int Data, Data1;

	printf("ZigZag ����  ������α׷��Դϴ�.\n");

	printf(" ����ϰ��� �ϴ� �ִ밪�� �Է��ϼ���: ");
	scanf("%d", &Data);
	printf(" ���⿡ ����ϰ��� �ϴ� ������ ������ �Է� : ");
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