#include <stdio.h>

void main()
{
	int Dan, Num, k;

	printf(" 구구단 출력프로그램입니다.\n");

	for (Dan = 1; Dan < 10; Dan += 3)
	{
		for (Num = 1; Num < 10; Num++)
		{
			for (k = 0; k < 3; k++)
			{
				printf(" %d * %d = %d \t", Dan + k, Num, (Dan + k)*Num);
			}
			printf("\n");
		}
		printf("\n");
	}
}

