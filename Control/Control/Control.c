#include <stdio.h>

void main()
{	
	int num;

	for (num = 1; num <= 100; num++)
	{
		printf("%3d", num);

		if (num%5 == 0)
		{
			printf("\n");
		}
	}
}

