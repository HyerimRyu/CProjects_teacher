#include <stdio.h>

void main()
{
	/*����1.
	int num;

	printf("�����Է� : ");
	scanf("%d", &num);

	int i;
	for (i = 0; i < num; i++)
	{
		printf("Hello world\n");
	}
	*/

	/*����2
	int num;

	printf("�����Է� : ");
	scanf("%d", &num);

	int i;
	for (i = 0; i < num; i++)
	{
		printf(" %3d ", 3*(i+1));
	}
	*/

	/*����3
	int num;
	int total=0;

	while (1)
	{
		printf("�����Է� : ");
		scanf("%d", &num);

		total = total+num; //total += num;			

		if ( num == 0 )
		{
			break;
		}//if
	}//while

	printf(" total : %d \n", total);
	*/

	/*����4
	int dan;

	printf("���ϴ� �ܼ� �Է� : ");
	scanf("%d", &dan);

	int i;
	for (i = 9; i > 0; i--)
	{
		printf(" %d * %d = %d\n", dan, i, dan*i);
	}
	*/

	/*����5
	int n;

	for (n = 1; n < 100; n++)
	{
		if (n%7==0 || n%9==0)
		{
			printf(" %2d ", n);
		}		
	}
	*/


	/*����6
	int a, b;

	printf("�����Է� : ");
	scanf("%d", &a);

	printf("�����Է� : ");
	scanf("%d", &b);

	int c;

	if (a>b)
	{
		c = a - b;
	}
	else
	{
		c = b - a;
	}

	printf(" %d \n", c);
	*/

	/*����7
	int a, b;

	printf("�����Է� : ");
	scanf("%d", &a);

	printf("�����Է� : ");
	scanf("%d", &b);

	int c = (a > b) ? a - b : b - a;
	printf(" %d \n", c);
	*/

	/*����8
	int dan, i;

	for (dan = 2; dan < 10; dan++)
	{
		if (dan%2==1)
		{
			continue;
		}		

		for (i = 1; i <10; i++)
		{
			printf(" %d * %d = %d\n", dan, i, dan*i);
			if (i == dan)
			{
				break;
			}
		}
		printf("\n");
	}
	*/

	/*����9
	int cnt; //��� �Է¹�����
	int num; //�Է¹��� ��������
	int total = 0;

	printf("���� � ? ");
	scanf("%d", &cnt);

	int i;
	for (i = 0; i < cnt; i++)
	{
		printf("�����Է� : ");
		scanf("%d", &num);

		total = total + num;
	}

	printf(" ��� : %.2f\n", (float)total / (float)cnt);
	*/

	/*����10
	int num;
	int total = 0;

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("�����Է�:");
		scanf("%d", &num);

		if (num < 1)
		{
			printf("1�̻��� ���ڸ� �־��ּ���\n");
			i--;
			continue;
		}

		total += num;
	}

	printf(" total : %d \n", total);
	*/

	/*����11
	int y, x;

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < y; x++) printf("o");

		printf("*");
		printf("\n");
	}


	/*y = 0;
	while (y < 5)
	{
		x = 0;
		while (x<y)
		{
			printf("o");
			x++;
		}
		

		printf("*");
		printf("\n");

		y++;
	}
	*/

	/*���� p.195 ��������3*/	
	int y,x;

	for (y = 0; y < 4; y++)
	{
		for (x = 0; x < y; x++)
		{
			printf(" ");
		}

		for (x = 0; x < 7 - y * 2; x++)
		{
			printf("*");
		}
		printf("\n");
	}




	
}