#include <stdio.h>

void main()
{
	int a, b, c;

	printf("정수입력 : ");
	scanf("%d", &a);
	printf("정수입력 : ");
	scanf("%d", &b);
	printf("정수입력 : ");
	scanf("%d", &c);

	if (a < 10)
	{
		printf("aaa");

		if (b < 20)
		{
			printf("bbbb");
		}
	}


	//합구하기
	int total=0;
	total = total + a;
	total = total + b;
	total +=  c;

	printf("총합 : %d\n", total);

	float aver;
	aver = (float)total / (float)3;
	printf("평균 : %.2f\n", aver);

	//최대값
	int max=a;

	max = (max < b) ? b : max;
	max = (max < c) ? c : max;
	printf("최대값 : %d\n", max);

	//최소값
	int min = a;

	min = (min > b) ? b : min;
	min = (min > c) ? c : min;
	printf("최소값 : %d\n", min);






}