#include <stdio.h>

void main()
{	
	int arr[4][3]; //[��][ȣ]

	for (int i = 0; i < 4; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			printf(" %d�� %dȣ �Է� : ", i, k);
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