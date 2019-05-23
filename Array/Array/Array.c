#include <stdio.h>

void main()
{	
	int arr[4][3]; //[Ãþ][È£]

	for (int i = 0; i < 4; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			printf(" %dÃþ %dÈ£ ÀÔ·Â : ", i, k);
			scanf("%d", &arr[i][k]);
		}
		printf("\n");
	}

	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			printf("  %5d  ", arr[i][k]);
		}
		printf("\n");
	}


}