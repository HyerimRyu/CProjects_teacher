#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Display(void);

int buf[5][5];

void main()
{
	/*//Ex1.
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		printf("input : ");
		scanf("%d", &arr[i]);
	}

	int max, min, total=0;

	max = min = total = arr[0];

	for (int i = 1; i < 5; i++)
	{
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
		total += arr[i];
	}

	printf(" �ִ밪 : %d \n", max);
	printf(" �ּҰ� : %d \n", min);
	printf(" ���� : %d \n", total);
	*/

	/*
	//Ex2.
	char str[30];
	int i;

	printf("���ܾ� �Է� : ");
	for (i = 0; i < 30; i++)
	{
		scanf("%c", &str[i]);
		//Ȥ�� �Էµ� �ѹ��ڰ� ����(ASCII : 10)����??
		if (str[i] == 10 || str[i] == 32) break;
	}

	printf(" ���ڼ� : %d \n", i);
	*/

	/*
	//Ex3.
	char str[30];
	int i;
	int max = 0;

	printf("���ܾ� �Է� : ");
	for (i = 0; i < 30; i++)
	{
		scanf("%c", &str[i]);
		//�Է¹��� ���ڰ� �ִ밪(�ƽ�Ű�ڵ尡 ����ū ��)�̳�?
		if (max < str[i]) max = str[i];

		//Ȥ�� �Էµ� �ѹ��ڰ� ����(ASCII : 10)����??
		if (str[i] == 10 || str[i] == 32) break;
	}

	//�ᱹ max���� �Է¹��� ���� ���� ū ���� ��������.
	printf(" ���� ū ���� : %c  \n", max);
	*/

	/*
	//Ex4.
	char str[30];
	int i;

	printf("���ܾ� �Է� : ");
	for (i = 0; i < 30; i++)
	{
		scanf("%c", &str[i]);

		//Ȥ�� �Էµ� �ѹ��ڰ� ����(ASCII : 10)����??
		if (str[i] == 10 || str[i] == 32) break;
	}
	
	int t;

	for (int k = 0; k < i/2 ; k++)
	{
		t = str[k];
		str[k] = str[i-1-k];
		str[i - 1 - k] = t;
	}

	for (int n = 0; n < i; n++)
	{
		printf("%c", str[n]);
	}
	*/

	/*
	//Ex5.
	int arr[10];
	int num;//�л���
	int total = 0;

	printf("�л��� : ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("�л� %d�� ������ �Է� : ", i+1);
		scanf("%d", &arr[i]);

		if (arr[i] < 0 || arr[i] >100)
		{
			printf("�߸��Է��߽��ϴ�\n");
			i--;
			continue;
		}
		
		total = total + arr[i];		
	}

	printf(" ��� : %.1f \n", (float)total/(float)num);
	*/
	/*
	//Ex6.
	int arr[10] = {0};

	int num;
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("input : ");
		scanf("%d", &num);

		int k;
		for (k = 0; k < 10; k++)
		{
			if (num <= 10 * (k+1) )
			{
				arr[k]++;
				break;
			}
		}		
	}

	for (int i = 0; i < 10; i++)
	{
		printf(" %2d - %2d : ", i*10+1, (i+1)*10);

		for (int k = 0; k < arr[i]; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/

	/*
	//Ex7.

	int seat[10] = {0};
	int a;

	while (1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�( 1(Y) �Ǵ� 0(N) )?");
		scanf("%d", &a);
		if (a == 0) break;

		//�����¼����� �����ֱ�
		printf("������ ���� ���´� ������ �����ϴ�.\n");
		printf("-----------------------------------\n");
		printf("�¼� ��ȣ :  1  2  3  4  5  6  7  8  9  10\n");
		printf("-----------------------------------\n");
		printf("���� ���� : ");

		for (int i = 0; i < 10; i++)
		{
			printf(" %d ", seat[i]);
		}
		printf("\n\n");


		//�¼���ȣ �Է¹ޱ�
		int n;

		while (1)
		{
			printf("���° �¼��� �����Ͻðڽ��ϱ�? ");
			scanf("%d", &n);

			if (seat[n - 1] != 0)
			{
				printf("�˼��մϴ�. �̹� ����� �¼��Դϴ�. �ٸ� �¼��� ������ �ּ���.\n");
			}
			else
			{
				printf("%d�� �¼� ����Ǿ����ϴ�.\n", n);
				//������·� �����
				seat[n - 1] = 1;
				break;
			}
		}

		
	}

	printf("������ �����մϴ�.");
	*/

	/*
	//Ex8.
	int arr1[5] = { 10, 20, 30, 40, 50 };
	int arr2[5] = { 1, 2, 3, 4, 5 };

	int arr3[5];

	for (int i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i] + arr2[4-i];
	}

	*/

	/*
	//Ex9.
	int arr[25];
	int i;

	srand(time(NULL));

	for (i = 0; i < 25; i++)
	{		
		arr[i] = rand()%25 + 1; //1~25
		//�ߺ����� �˻�
		for (int k = 0; k < i; k++)
		{
			if (arr[i] == arr[k])
			{
				i--;
				break;
			}
		}
	}

	for (int i = 0; i < 25; i++)
	{
		printf(" %2d ", arr[i]);
	}
	*/

	/*
	//Ex10.
	int arr[25];
	int i;

	srand(time(NULL));

	for (i = 0; i < 25; i++)
	{
		arr[i] = rand() % 25 + 1; //1~25
		//�ߺ����� �˻�
		for (int k = 0; k < i; k++)
		{
			if (arr[i] == arr[k])
			{
				i--;
				break;
			}
		}
	}

	int ran[5][5];

	for (int i = 0; i < 25; i++)
	{
		int y, x;

		y = i / 5;
		x = i % 5;

		ran[y][x] = arr[i];
	}


	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			printf("%4d", ran[y][x]);
		}
		printf("\n");
	}
	*/

	//Ex11.
	int n = 1;
	int y=-1, x=0;
	int limit = 5;
	int dir = 1;

	while (n <= 25)
	{
		//���ι���
		for (int i = 0; i < limit; i++)
		{
			y += dir;
			buf[y][x] = n;
			n++;			
		}

		limit--;

		//���ι���
		for (int i = 0; i < limit; i++)
		{
			x += dir;
			buf[y][x] = n;
			n++;
		}

		dir = -dir;
		
	}//while

	Display();

}//main

void Display(void)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%3d\t", buf[i][j]);
		}
		printf("\n");
	}
}