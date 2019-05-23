#include <stdio.h>

void main()
{
	int y, x;
	int num;

	printf("정수입력 : ");
	scanf("%d", &num);

	for (y = num; y > 0; y--)
	{
		for (x = num; x > 0; x--)
		{
			if (y == x || (num + 1 - y) == x) printf("%d", x);
			else printf(" ");
		}
		printf("\n");
	}

}

