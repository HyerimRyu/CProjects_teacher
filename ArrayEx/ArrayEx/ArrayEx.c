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

	printf(" 최대값 : %d \n", max);
	printf(" 최소값 : %d \n", min);
	printf(" 총합 : %d \n", total);
	*/

	/*
	//Ex2.
	char str[30];
	int i;

	printf("영단어 입력 : ");
	for (i = 0; i < 30; i++)
	{
		scanf("%c", &str[i]);
		//혹시 입력된 한문자가 엔터(ASCII : 10)인지??
		if (str[i] == 10 || str[i] == 32) break;
	}

	printf(" 글자수 : %d \n", i);
	*/

	/*
	//Ex3.
	char str[30];
	int i;
	int max = 0;

	printf("영단어 입력 : ");
	for (i = 0; i < 30; i++)
	{
		scanf("%c", &str[i]);
		//입력받은 글자가 최대값(아스키코드가 제일큰 값)이냐?
		if (max < str[i]) max = str[i];

		//혹시 입력된 한문자가 엔터(ASCII : 10)인지??
		if (str[i] == 10 || str[i] == 32) break;
	}

	//결국 max에는 입력받은 값중 가장 큰 값이 남아있음.
	printf(" 가장 큰 문자 : %c  \n", max);
	*/

	/*
	//Ex4.
	char str[30];
	int i;

	printf("영단어 입력 : ");
	for (i = 0; i < 30; i++)
	{
		scanf("%c", &str[i]);

		//혹시 입력된 한문자가 엔터(ASCII : 10)인지??
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
	int num;//학생수
	int total = 0;

	printf("학생수 : ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("학생 %d의 점수를 입력 : ", i+1);
		scanf("%d", &arr[i]);

		if (arr[i] < 0 || arr[i] >100)
		{
			printf("잘못입력했습니다\n");
			i--;
			continue;
		}
		
		total = total + arr[i];		
	}

	printf(" 평균 : %.1f \n", (float)total/(float)num);
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
		printf("좌석을 예약하시겠습니까( 1(Y) 또는 0(N) )?");
		scanf("%d", &a);
		if (a == 0) break;

		//예약좌석상태 보여주기
		printf("현재의 예약 상태는 다음과 같습니다.\n");
		printf("-----------------------------------\n");
		printf("좌석 번호 :  1  2  3  4  5  6  7  8  9  10\n");
		printf("-----------------------------------\n");
		printf("예약 상태 : ");

		for (int i = 0; i < 10; i++)
		{
			printf(" %d ", seat[i]);
		}
		printf("\n\n");


		//좌석번호 입력받기
		int n;

		while (1)
		{
			printf("몇번째 좌석을 예약하시겠습니까? ");
			scanf("%d", &n);

			if (seat[n - 1] != 0)
			{
				printf("죄송합니다. 이미 예약된 좌석입니다. 다른 좌석을 선택해 주세요.\n");
			}
			else
			{
				printf("%d번 좌석 예약되었습니다.\n", n);
				//예약상태로 만들기
				seat[n - 1] = 1;
				break;
			}
		}

		
	}

	printf("예약을 종료합니다.");
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
		//중복인지 검사
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
		//중복인지 검사
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
		//세로방향
		for (int i = 0; i < limit; i++)
		{
			y += dir;
			buf[y][x] = n;
			n++;			
		}

		limit--;

		//가로방향
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