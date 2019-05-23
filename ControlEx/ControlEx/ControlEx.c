#include <stdio.h>

void main()
{
	/*문제1.
	int num;

	printf("정수입력 : ");
	scanf("%d", &num);

	int i;
	for (i = 0; i < num; i++)
	{
		printf("Hello world\n");
	}
	*/

	/*문제2
	int num;

	printf("정수입력 : ");
	scanf("%d", &num);

	int i;
	for (i = 0; i < num; i++)
	{
		printf(" %3d ", 3*(i+1));
	}
	*/

	/*문제3
	int num;
	int total=0;

	while (1)
	{
		printf("정수입력 : ");
		scanf("%d", &num);

		total = total+num; //total += num;			

		if ( num == 0 )
		{
			break;
		}//if
	}//while

	printf(" total : %d \n", total);
	*/

	/*문제4
	int dan;

	printf("원하는 단수 입력 : ");
	scanf("%d", &dan);

	int i;
	for (i = 9; i > 0; i--)
	{
		printf(" %d * %d = %d\n", dan, i, dan*i);
	}
	*/

	/*문제5
	int n;

	for (n = 1; n < 100; n++)
	{
		if (n%7==0 || n%9==0)
		{
			printf(" %2d ", n);
		}		
	}
	*/


	/*문제6
	int a, b;

	printf("정수입력 : ");
	scanf("%d", &a);

	printf("정수입력 : ");
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

	/*문제7
	int a, b;

	printf("정수입력 : ");
	scanf("%d", &a);

	printf("정수입력 : ");
	scanf("%d", &b);

	int c = (a > b) ? a - b : b - a;
	printf(" %d \n", c);
	*/

	/*문제8
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

	/*문제9
	int cnt; //몇번 입력받을지
	int num; //입력받은 정수저장
	int total = 0;

	printf("정수 몇개 ? ");
	scanf("%d", &cnt);

	int i;
	for (i = 0; i < cnt; i++)
	{
		printf("정수입력 : ");
		scanf("%d", &num);

		total = total + num;
	}

	printf(" 평균 : %.2f\n", (float)total / (float)cnt);
	*/

	/*문제10
	int num;
	int total = 0;

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("정수입력:");
		scanf("%d", &num);

		if (num < 1)
		{
			printf("1이상의 숫자만 넣어주세요\n");
			i--;
			continue;
		}

		total += num;
	}

	printf(" total : %d \n", total);
	*/

	/*문제11
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

	/*교재 p.195 연습문제3*/	
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