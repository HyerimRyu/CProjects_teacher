#include <stdio.h>

void main()
{
	int a, b, c;

	printf("�����Է� : ");
	scanf("%d", &a);
	printf("�����Է� : ");
	scanf("%d", &b);
	printf("�����Է� : ");
	scanf("%d", &c);

	if (a < 10)
	{
		printf("aaa");

		if (b < 20)
		{
			printf("bbbb");
		}
	}


	//�ձ��ϱ�
	int total=0;
	total = total + a;
	total = total + b;
	total +=  c;

	printf("���� : %d\n", total);

	float aver;
	aver = (float)total / (float)3;
	printf("��� : %.2f\n", aver);

	//�ִ밪
	int max=a;

	max = (max < b) ? b : max;
	max = (max < c) ? c : max;
	printf("�ִ밪 : %d\n", max);

	//�ּҰ�
	int min = a;

	min = (min > b) ? b : min;
	min = (min > c) ? c : min;
	printf("�ּҰ� : %d\n", min);






}